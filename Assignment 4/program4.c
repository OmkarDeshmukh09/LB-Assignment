#include<stdio.h>

int NonFactRev(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for ( iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum = iCnt + iSum ;       
        }
    }
    return iSum ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number ");
    scanf("%d",&iValue);

    iRet = NonFactRev(iValue);

    printf("%d",iRet);

    return 0 ;
}