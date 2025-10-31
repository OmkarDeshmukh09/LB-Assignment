#include<stdio.h>

void PrintOddNumber(int iNo)
{
    int iCnt = 0 ;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }

    for (iCnt = 0 ; iNo >= iCnt; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    
}

int main ()
{
    int iValueN = 0;

    printf("Enter the Number :");
    scanf("%d",&iValueN);

    PrintOddNumber(iValueN);

    return 0;
}