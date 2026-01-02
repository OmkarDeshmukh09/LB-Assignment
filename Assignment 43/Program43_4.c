#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

int iCount = 0;

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

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

int SecondMaximum(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    int iMax = temp->data;
    int iSecMax=temp->data;

    while (temp != NULL)
    {
        if (iMax < temp->data)
        {
            iMax = temp->data;
        }

        temp = temp->next;
    }

    temp = first;
    while (temp != NULL)
    {
        if (temp->data > iSecMax && temp->data < iMax)
        {
            iSecMax = temp->data;
        }

        temp = temp->next;
    }

    return iSecMax;
}

int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head, 28);
    InsertFirst(&head, 17);
    InsertFirst(&head, 50);
    InsertFirst(&head, 11);
    InsertFirst(&head, 6);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);

    iRet = SecondMaximum(head);

    printf("The Second Maximum is : %d ", iRet);

    return 0;
}
