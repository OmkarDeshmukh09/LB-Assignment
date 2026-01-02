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

void DisplayPerfect(PNODE first)
{   
    int i=0;
    int iPer=0;

    while ( first != NULL)
    {   
        iPer=0;
        for ( i = 1; i <= ((first->data)/2); i++)
        {
            if (first->data % i==0)
            {
                iPer=iPer+i;
            }
            
        }
        if (first->data==iPer)
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
    InsertFirst(&head, 30);
    InsertFirst(&head, 17);
    InsertFirst(&head, 40);
    InsertFirst(&head, 6);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);



  


    DisplayPerfect(head);

   

    return 0;
}
