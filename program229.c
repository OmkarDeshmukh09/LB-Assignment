#include<stdio.h>

int CountCaptial(char str[] )
{
    int iCount = 0 ;
    int sCount = 0 ;

    while(*str != '\0')
    {
        if ( (*str >= 'A') && (*str <= 'Z') )
        {
            iCount++;
        }
        str++;       
    }
    return iCount;
}

int main()
{
    char Arr [50] = {'\0'};
    int iRet = 0 ;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCaptial(Arr);

    printf(" Count of Ocurances of Capital Alphabets are : %d\n",iRet);

    return 0;
}