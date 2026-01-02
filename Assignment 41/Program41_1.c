#include<stdio.h>

void Display(int iNo)
{
    static int iCnt=0;

    iCnt=iNo;

    if(iCnt>=1)
    {
        printf("%d\t*\t",iCnt);
        iCnt--;
        Display(iNo-1);
    }

}

int main()
{
    int iValue=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}