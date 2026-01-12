#include<stdio.h>

int CountOccurance(char str[] , char ch)
{
    int iCount = 0 ;
    int sCount = 0 ;

    while(*str != '\0')
    {
        if ( *str == ch )
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

    iRet = CountOccurance(Arr , 'd');

    printf(" Count of Ocurances are : %d\n",iRet);

    return 0;
}