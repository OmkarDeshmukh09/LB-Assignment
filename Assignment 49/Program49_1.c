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

void DisplayEvenPosition(PPNODE head)
{
    int iPos = 0;
    PNODE temp = *head;

    while (temp != NULL)
    {
        iPos ++;
        if (iPos % 2 == 0)
        {
            printf(" | %d | -> ",temp->data);
        }
        
        temp = temp->next;
    }
    printf(" NULL \n");
}

int main()
{

    PNODE head = NULL;
    int iRet=0;

    InsertFirst(&head, 1);
    InsertFirst(&head, 2);
    InsertFirst(&head, 3);
    InsertFirst(&head, 4);
    InsertFirst(&head, 5);
    InsertFirst(&head, 6);
    InsertFirst(&head, 7);
    InsertFirst(&head, 7);

    printf("Before\n");
    Display(head);

    printf("After\n");

    printf("--------------------------------\n");
    
    printf("Before\n");
    Display(head);

    printf("After\n");
    DisplayEvenPosition(&head);   
    
    return 0;
}