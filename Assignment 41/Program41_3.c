#include <stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0;

    if (*str != '\0')
    {
        iCnt++;
        str++;
        Strlen(str);
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s", Arr);

    iRet = Strlen(Arr);

    printf("%d", iRet);

    return 0;
}