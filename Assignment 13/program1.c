#include<stdio.h>

void PrintNumber(int iNo)
{
    int iCnt = 0 ;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }

    for (iCnt = 1 ; iNo >= iCnt; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
}

int main ()
{
    int iValueN = 0;

    printf("Enter the Number :");
    scanf("%d",&iValueN);

    PrintNumber(iValueN);

    return 0;
}