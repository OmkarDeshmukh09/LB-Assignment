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

void IncrementAll(PNODE first)
{
    while (NULL != first)
    {
        first->data=first->data+1;

        first = first->next;
    }
}

int main()
{

    PNODE head = NULL;

    InsertFirst(&head, 71);
    InsertFirst(&head, 61);
    InsertFirst(&head, 51);
    InsertFirst(&head, 41);
    InsertFirst(&head, 31);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    printf("Before\n");
    Display(head);

    IncrementAll(head);

    printf("After\n");
    Display(head);

    return 0;
}