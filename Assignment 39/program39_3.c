#include <stdio.h>

void Display()
{
    static int iNo = 5;

    if (iNo >= 1)
    {
        printf("%d\n", iNo);
        iNo--;
        Display();
    }
}

int main()
{

    Display();

    return 0;
}