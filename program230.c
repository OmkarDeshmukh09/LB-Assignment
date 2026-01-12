#include<stdio.h>

void CountAll(char str[] )
{
    int iCountsmall = 0 ;
    int iCountcapital = 0 ;

    while(*str != '\0')
    {
        if ( (*str >= 'A') && (*str <= 'Z') )
        {
            iCountcapital++;
        }
        else        // else will count all space and special characters and non capital and is wrong
        {
            iCountsmall++;
        }
        str++;       
    }
    printf("The Number of Capital Alphabets is : %d\n",iCountcapital);

    printf("The Number of Small Alphabets is : %d\n",iCountsmall);
}

int main()
{
    char Arr [50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    CountAll(Arr);

    return 0;
}