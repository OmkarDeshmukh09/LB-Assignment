#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

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

bool CheckSorted (PNODE head)
{
    PNODE temp = NULL;
   
    temp = head;

    while (temp->next != NULL)
    {
        if (temp->data > temp->next->data)
        {
            return false;
        }    
        temp = temp->next;
    }

    return true;
}

int main()
{

    PNODE head = NULL;
    bool bRet=0;

    InsertFirst(&head, 8);
    InsertFirst(&head, 7);
    InsertFirst(&head, 6);
    InsertFirst(&head, 5);
    

    printf("-------------------------         Before           -------------------------\n");
    Display(head);
    printf("-------------------------         After           -------------------------\n");

   bRet = CheckSorted(head);
   
   if (bRet == true)
   {
        printf("LinkList is sorted ");
   }
   else
   {
        printf("LinkList is not sorted ");
   }  

    return 0;
}