#include<stdio.h>

void PrintCounter(int iNo)
{
    int iCnt = 0 ;

    if (iNo < 0 )
    {
        iNo = -iNo;
    }
    
    for (iCnt = 0; iNo >= iCnt; iCnt++)
    {
        printf("%d ,",iCnt);
    }
    
}

int main()
{
    int iValue = 0 ;

    printf("Enter A Number : ");
    scanf("%d",&iValue);

    PrintCounter(iValue);

    return 0 ;
}
