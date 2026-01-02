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

int CountPrime(PNODE first)
{
    int iCount = 0;
    int No = 0;
    int iFreq = 0;
    int iCnt=0;

    while (first != NULL)
    {
        No = first->data;
        iFreq = 0;

        for (iCnt = 2; iCnt <= No / 2; iCnt++)
        {
            if ((No % iCnt) == 0)
            {
                iFreq++;
            }
        }
        if (iFreq == 0)
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
    int iRet=0;

    InsertFirst(&head, 721);
    InsertFirst(&head, 37);
    InsertFirst(&head, 5);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 2122);
    InsertFirst(&head, 11);

    printf("Before\n");
    Display(head);

    printf("After\n");

    iRet=CountPrime(head);


    printf("Prime No is :%d",iRet);

    return 0;
}