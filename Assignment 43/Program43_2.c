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

void DisplayPrime(PNODE first)
{   
    int i=0;
    int iCount=0;

    while ( first != NULL)
    {   
        iCount=0;
        for ( i = 2; i <= ((first->data)/2); i++)
        {
            if (first->data % i==0)
            {
                iCount++;
            }
            
        }
        if (iCount==0)
        {   
            printf("%d\n",first->data);
        }
        
        first=first->next;
    }
    
}


int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head, 28);
    InsertFirst(&head, 17);
    InsertFirst(&head, 50);
    InsertFirst(&head, 11);
    InsertFirst(&head, 6);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);



    


    DisplayPrime(head);

   

    return 0;
}
