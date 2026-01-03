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
    printf("The Total numbers of nodes are : %d\n",iCount);
}

void DisplayyAlternate (PNODE head)
{
    int iPos = 1 ;
    PNODE temp = NULL;

    temp = head;

     while (temp != NULL)
    {
        if (iPos % 2 != 0)
        {
            printf(" | %d | -> ",temp->data);   
        }

        temp = temp->next;
        iPos++;

    }
    printf(" NULL \n");

}

int main()
{

    PNODE head = NULL;
    bool bRet=0;

    InsertFirst(&head, 8);
    InsertFirst(&head, 7);
    InsertFirst(&head, 6);
    InsertFirst(&head, 5);
    InsertFirst(&head, 4);
    InsertFirst(&head, 3);
    InsertFirst(&head, 2);
    InsertFirst(&head, 1);
    

    printf("-------------------------         Before           -------------------------\n");
    Display(head);
    printf("-------------------------         After           -------------------------\n");

   DisplayyAlternate(head);  

    return 0;
}