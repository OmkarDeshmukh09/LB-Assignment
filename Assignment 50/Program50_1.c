#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int iCount = 0;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
    iCount++;
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

void MakeAbsolute(PPNODE head)
{
    
    PNODE temp = *head;

    while (temp != NULL)
    {
        if (temp->data < 0)
        {
            temp->data = -(temp->data);
        }
        temp = temp->next;
    }
}

int main()
{

    PNODE head = NULL;
    int iRet=0;

    InsertFirst(&head, 1);
    InsertFirst(&head, 2);
    InsertFirst(&head, -3);
    InsertFirst(&head, 4);
    InsertFirst(&head, 15);
    InsertFirst(&head, -10);
    InsertFirst(&head, 99);
    InsertFirst(&head, 71);

    printf("Before\n");
    Display(head);

    printf("---------------      Before       -----------------\n");
    
    Display(head);

    MakeAbsolute(&head);

    printf("---------------      After       -----------------\n");
       
    Display(head);

    return 0;
}