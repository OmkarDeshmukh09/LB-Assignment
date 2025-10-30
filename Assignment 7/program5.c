#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0 ;
    int iMulti = 0 ;

    if (iNo == 0)
    {
        printf("Invalid input");
    }
    for (iCnt = 1; iCnt <= 6 ; iCnt++)
    {
        iMulti = iNo * iCnt ;
        printf("%d ",iMulti);
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}