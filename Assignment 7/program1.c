#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0 ;

    if (iNo < 0)
    {
        iNo = - iNo;
    }
    for (iCnt = 1 ; iNo >= iCnt; iCnt++)
    {
        printf(" $  * ");
    }
    
    
}

int main()
{
    int iValue = 0 ;

    printf("Enterr number : ");
    scanf("%d",&iValue);

    Pattern (iValue);
    
    return 0 ;
}