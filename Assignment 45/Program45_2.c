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
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int FirstOccurance(PNODE first,int no)
{   
    int iCnt=0;
    while (first != NULL)
    {   
        iCnt++;
        if (first->data==no)
        {
            return iCnt;
        }
        first=first->next;
    }
    
}

int main()
{

    PNODE head = NULL;
    int iRet=0;

    InsertFirst(&head, 71);
    InsertFirst(&head, 61);
    InsertFirst(&head, 51);
    InsertFirst(&head, 41);
    InsertFirst(&head, 31);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);

    iRet=FirstOccurance(head,61);

    printf("First Occurance At Position : %d",iRet);

    return 0;
}