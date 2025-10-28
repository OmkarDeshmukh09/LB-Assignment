#include<stdio.h>
#include<stdbool.h>

bool CheckGrater(int iNo)
{
    if (iNo > 100)
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
    int iValue = 0 ;
    bool bRet = 0 ;

    printf("Please Enter Number : ");

    scanf("%d",&iValue);

    bRet = CheckGrater(iValue);

    if (bRet == true)
    {
        printf("Grater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}