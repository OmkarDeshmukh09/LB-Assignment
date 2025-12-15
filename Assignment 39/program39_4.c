#include <stdio.h>

void Display()
{
    static char ch = 'A';

    if (ch <= 'F')
    {
        printf("%c\n", ch);
        ch++;
        Display();
    }
}

int main()
{

    Display();

    return 0;
}