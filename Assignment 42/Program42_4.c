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

    if (first == NULL)
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
int Maximum(PNODE first)
{   
    int iMax=first->data;
    while (first != NULL)
    {
        if (first->data > iMax)
        {
            iMax=first->data;
        }
        
        first=first->next;
    }
    return iMax;
    

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



int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head, 30);
    InsertFirst(&head, 30);
    InsertFirst(&head, 500);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);

    printf("%d\n", iCount);

    iRet =Maximum(head);

    printf("Maximum is : %d",iRet);

    return 0;
}
