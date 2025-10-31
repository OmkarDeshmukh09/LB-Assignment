#include <stdio.h>

void EvenRangeDisplay(int iNo1, int iNo2)
{
    int iCnt = 0 ;
    if(iNo1 > iNo2)
    {
        printf("Invalid Input");
        return;
    }

    for(iCnt = iNo1 ; iCnt <= iNo2 ; iCnt++ )
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
}

int main ()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Starting number : ");
    scanf("%d",&iValue1);
    
    printf("Enter Ending number : ");
    scanf("%d",&iValue2);

    EvenRangeDisplay(iValue1,iValue2);

    return 0 ;
}