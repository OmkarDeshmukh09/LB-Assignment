#include <stdio.h>

int Factorial(int no)
{
    static int iCnt = 0;
    static int  iFact = 1;

    iCnt = no;

    if (iCnt >= 1)
    {
        iFact = iFact * iCnt;
        iCnt--;
        Factorial(iCnt);
    }
    else
    {
        return iFact;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("%d", iRet);

    return 0;
}