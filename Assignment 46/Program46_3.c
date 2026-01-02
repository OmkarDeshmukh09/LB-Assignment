#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

#define true 1
#define false 0

typedef int BOOL;
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

BOOL isEmpty(PNODE first)
{
    if (first == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    PNODE head = NULL;
    BOOL bret = 0;

    

    InsertFirst(&head, 71);
    InsertFirst(&head, 61);
    InsertFirst(&head, 51);
    InsertFirst(&head, 41);
    InsertFirst(&head, 31);
    InsertFirst(&head, 61);
    InsertFirst(&head, 11);

    Display(head);

    

    bret = isEmpty(head);

    if (bret == 1)
    {
        printf("It is Empty");
    }
    else
    {
        printf("It is  Not Empty");
    }

    return 0;
}