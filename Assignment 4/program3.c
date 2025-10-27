#include<stdio.h>

void NonFactRev(int iNo)
{
    int iCnt = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for ( iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d  ",iCnt);        
        }
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter Number ");
    scanf("%d",&iValue);

    NonFactRev(iValue);

    return 0 ;
}