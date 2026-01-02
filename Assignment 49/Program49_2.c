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

bool CheckAllPositive(PPNODE head)
{
    
    PNODE temp = *head;

    while (temp != NULL)
    {
        if (temp->data <= 0)
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
    bool bRet= false;

    InsertFirst(&head, 1);
    InsertFirst(&head, 2);
    InsertFirst(&head, 3);
    InsertFirst(&head, 4);
    InsertFirst(&head, 5);
    InsertFirst(&head, 6);
    InsertFirst(&head, 7);
    InsertFirst(&head, -7);

    printf("Before\n");
    Display(head);

    printf("After\n");

    printf("--------------------------------\n");
    
    printf("Before\n");
    Display(head);

    printf("After\n");
    bRet = CheckAllPositive(&head);   
  
    if (bRet == true)
    {
        printf("All node have Positive Values");
    }
    else
    {
        printf("All node don't have Positive Values");
    }
    
    
    return 0;
}