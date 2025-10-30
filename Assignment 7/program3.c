#include<stdio.h>

void PrintNumberLine(int iNo)
{
    int iCnt = 0 ;

    if (iNo < 0 )
    {
        iNo = -iNo;
    }
    
    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ,",iCnt);
    }
    
}

int main()
{
    int iValue = 0 ;

    printf("Enter A Number : ");
    scanf("%d",&iValue);

    PrintNumberLine(iValue);

    return 0 ;
}
