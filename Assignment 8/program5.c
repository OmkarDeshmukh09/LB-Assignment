#include <stdio.h>

void TableReverse(int iNo)
{
    int iCnt = 0 , iMulti = 0 ;

    if (iNo < 0 )
    {
        iNo = -iNo;
    }
    for (iCnt = 10 ; iCnt >= 1 ; iCnt--)
    {
        iMulti = iNo * iCnt ;
        printf("%d ",iMulti);
    }
    

}

int main()
{
    int iValue = 0 ;

    printf("Enter a Number");
    scanf("%d",&iValue);

    TableReverse(iValue);

    return 0 ;
}