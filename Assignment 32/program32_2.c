#include <stdio.h>

void Print(int iRow , int iCol)
{
    int i = 0, j = 0;

    for ( i = iRow ; i >= 1; i--)
    {
        for ( j = 1 ; j <= iCol; j++)
        {
            if (i == j)
            {
                printf(" #\t");
            }
            else if(i>= j)
            {
                printf(" *\t");
            }
            else
            {
                printf(" @\t");
            } 
        }
       printf("\n"); 
    }
    
}

int main ()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of  Columns : ");
    scanf("%d",&iValue2);

    Print(iValue1,iValue2);
}