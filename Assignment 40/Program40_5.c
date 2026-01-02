#include <stdio.h>

void Display(int iNO)
{
    static char ch = 'a';

    if (ch < (ch+iNO))
    {
        printf("%c\t", ch);
        ch++;
        Display(iNO - 1);
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