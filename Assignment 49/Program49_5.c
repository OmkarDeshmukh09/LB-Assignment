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

int CountTwoDigit(PPNODE head)
{
    int iCnt = 0;
    PNODE temp = *head;

    while (temp != NULL)
    {
        if ((temp->data >= 10) && (temp->data <= 99))
        {
            iCnt++;
        }
        
        temp = temp->next;
    }

    return iCnt;
}

int main()
{

    PNODE head = NULL;
    int iRet=0;

    InsertFirst(&head, 1);
    InsertFirst(&head, 2);
    InsertFirst(&head, 3);
    InsertFirst(&head, 4);
    InsertFirst(&head, 15);
    InsertFirst(&head, 10);
    InsertFirst(&head, 99);
    InsertFirst(&head, 71);

    printf("Before\n");
    Display(head);
    printf("--------------------------------\n");
    
    Display(head);

    iRet = CountTwoDigit(&head);
    printf("Two Digit Numbers in LinkList are : %d",iRet);   
    
    return 0;
}