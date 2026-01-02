#include <stdio.h>
#include <stdlib.h>



#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

#define  true 1
#define  false 0

typedef int bool;
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


int iCount=0;

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

bool Search(PNODE first,int no)
{   
    bool bflag=false;

    while (first != NULL)
    {
        if (first->data == no)
        {
            bflag=true;
            return bflag;
        }
        
        first=first->next;
    }
    return bflag;
}


int main()
{
    PNODE head=NULL;
    bool bret=false;
    int iNo=0;
    
    InsertFirst(&head,111);
    InsertFirst(&head,101);
    InsertFirst(&head,71);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    printf("Enter the Number to search:");
    scanf("%d",&iNo);


    bret=Search(head,iNo);

    if (bret==true)
    {
        printf("Present");
    }
    else
    {
        printf("absent");
    }
    
    
    return 0;
}