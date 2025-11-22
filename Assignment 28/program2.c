#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0 ;

    for ( i = 1; i <= iRow; i++)
    {
        char ch = 'A';
        //Capital letters
        if ((i %2) != 0)
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("\t%c\t",ch);
                ch++;
            }
        }
        else
        {
            ch ='a';
            //Small Letters
            for (j = 1; j <= iCol; j++)
            {
                printf("\t%c\t",ch);
                ch++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0 ;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);
    
    printf("Enter number of Coloumns : ");
    scanf("%d",&iValue2);
    
    Pattern(iValue1, iValue2);

    return 0 ;
}