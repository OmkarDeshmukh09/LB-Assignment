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
    char cValue = '\0';
    char Arr [50] = {'\0'};
    int iRet = 0 ;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);          //   initial Space ' ' before %c will work everyehre

    iRet = CountOccurance(Arr , cValue);

    printf(" Count of Ocurances are : %d\n",iRet);

    return 0;
}