#include <stdio.h>

void Display(int iNo)
{

    static int iDigit = 0;
    static int iSum = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
        printf("%d\n", iDigit);
        Display(iNo);

        if (iNo <= 0)
        {
            printf("%d\n", iSum);
        }
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