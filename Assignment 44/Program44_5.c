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
        iCount++;
    }
    else
    {
        newn->next = *first;
        *first = newn;
        iCount++;
    }
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

void DisplayEven(PNODE first)
{

    while (first != NULL)
    {
        if (first->data % 2 == 0)
        {
            printf("%d\t", first->data);
        }

        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 111);
    InsertFirst(&head, 100);
    InsertFirst(&head, 71);
    InsertFirst(&head, 51);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    Display(head);

    DisplayEven(head);

    return 0;
}