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

void SumOfDigit(PNODE first)
{   
    while (first != NULL)
    {
        int iDigit=0;
        int iNo=0;
        int iSum=0;

        iNo=(first->data);
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

    InsertFirst(&head, 28);
    InsertFirst(&head, 17);
    InsertFirst(&head, 50);
    InsertFirst(&head, 11);
    InsertFirst(&head, 6);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);

    SumOfDigit(head);

    return 0;
}
