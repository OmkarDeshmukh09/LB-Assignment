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

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int SearchLastOcc(PNODE first, int no)
{
    int pos = 1;
    int Occurance=0;
  

    while (first != NULL)
    {
        if (first->data==no)
        {
            Occurance=pos;
        }
        pos++;
        first=first->next;
        
    }
    return Occurance;
    
     
}

int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head, 30);
    InsertFirst(&head, 30);
    InsertFirst(&head, 50);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);

    printf("%d\n", iCount);

    iRet = SearchLastOcc(head, 30);

    if (iRet == 0)
    {
        printf("Element Not Found");
    }
    else
    {
        printf("Occured At : %d for last  time", iRet);
    }

    return 0;
}
