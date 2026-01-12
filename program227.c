#include<stdio.h>

int CountSmall(char str[] )
{
    int iCount = 0 ;
    int sCount = 0 ;

    while(*str != '\0')
    {
        if ( (*str >= 97) && (*str <=122) )         //Added ASCII values
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

    iRet = CountSmall(Arr);

    printf(" Count of Ocurances of Small Alphabets are : %d\n",iRet);

    return 0;
}