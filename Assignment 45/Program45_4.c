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

int CountGreater(PNODE first, int no)
{
    int iCount = 0;
    while (first != NULL)
    {
        if (first->data > no)
        {
            iCount++;
        }
        first = first->next;
    }
    return iCount;
}

int main()
{

    PNODE head = NULL;
    int iRet = 0;
    int iNo = 0;

    InsertFirst(&head, 71);
    InsertFirst(&head, 61);
    InsertFirst(&head, 51);
    InsertFirst(&head, 41);
    InsertFirst(&head, 31);
    InsertFirst(&head, 61);
    InsertFirst(&head, 11);

    Display(head);

    printf("Enter the Number:");
    scanf("%d", &iNo);

    iRet = CountGreater(head, iNo);

    printf("Count of Greater than %d is : %d",iNo, iRet);

    return 0;
}