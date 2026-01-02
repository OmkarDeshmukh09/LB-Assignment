#include <stdio.h>

void Display(int iNO)
{
    static int iCnt;

    iCnt=iNO;

    
    if(iCnt>=1)
    {
        printf("%d\t",iCnt);
        iCnt--;
        Display(iNO-1);
    }

}

int main()
{

    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}