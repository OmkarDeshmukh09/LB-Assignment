#include<stdio.h>
#include<stdbool.h>

bool CheckEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;
    bool bRet = 0 ;

    printf("Please Enter 1'st Number : ");
    scanf("%d",&iValue1);

    printf("Please Enter 2'nd Number : ");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1,iValue2);

    if (bRet == true)
    {
        printf("They are Equal ");
    }
    else
    {
        printf("They are not Equal");
    }
    return 0;
}