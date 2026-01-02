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

void SumOfDigits(PNODE first)
{
    int iNo=0;
    int iSum=0;
    int iDigit=0;

    while (first != NULL)
    {
        iNo=first->data;
        iSum=0;
        while (iNo != 0)
        {
            iDigit=iNo%10;
            iSum=iSum+iDigit;
            iNo=iNo/10;
        }
        printf("%d\t",iSum);
        first=first->next;
    }
    
}


int main()
{

    PNODE head = NULL;

    InsertFirst(&head, 721);
    InsertFirst(&head, 61);
    InsertFirst(&head, 5);
    InsertFirst(&head, 41);
    InsertFirst(&head, 31);
    InsertFirst(&head, 2122);
    InsertFirst(&head, 11);

    printf("Before\n");
    Display(head);

    printf("After\n");

    SumOfDigits(head);

    return 0;
}