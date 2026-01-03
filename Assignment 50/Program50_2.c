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

void DisplayGraterThanAvg(PPNODE head)
{
    int iSum = 0;
    int Count = 0;
    int iAvg = 0;

    PNODE temp = *head;

    while (temp != NULL)
    {
        iSum = (temp->data) + iSum ;
        Count++;
        temp = temp->next;
    }
    iAvg = iSum / Count;
    printf("The Avarage is : %d\n",iAvg);
    printf("The Total nodes are : %d\n",Count);

    temp = *head;
    
    while (temp != NULL)
    {
        if (temp->data > iAvg)
        {
            printf(" | %d | -> ",temp->data);
        }
        temp = temp->next;
    }
    printf(" NULL\n");
}

int main()
{

    PNODE head = NULL;
    int iRet=0;

    InsertFirst(&head, 2);
    InsertFirst(&head, 4);
    InsertFirst(&head, 6);
    InsertFirst(&head, 8);
    

    printf("-------------------------         Before           -------------------------\n");
    Display(head);
    printf("-------------------------         After           -------------------------\n");

    DisplayGraterThanAvg(&head);     

    return 0;
}