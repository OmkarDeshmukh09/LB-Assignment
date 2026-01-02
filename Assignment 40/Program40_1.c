#include <stdio.h>

void Display(int iSize)
{
    static int iNo = 1;

    if (iNo <= iSize)
    {
        printf("*\n");
        iNo++;

        Display(iSize);
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
