#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iKm = 1000 ;

    iKm = iNo * iKm ;

    return iKm ;
}

int main()
{
    int iValue = 0 ;
    int iRet   = 0 ;

    printf("Enter the Kilometer : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("The %d Kilometer to meter is :%d meters ",iValue,iRet);

    return 0 ;
}