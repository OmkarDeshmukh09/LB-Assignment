#include<stdio.h>

void CountDigits(char str[] )
{
    int iCount = 0 ;

    while(*str != '\0')
    {
        if ( (*str >= '0') && (*str <= '9' ) )        // Adding actual digits in single quotes rather than ASCII number of (0-9)
        {
            iCount++;
        }
        str++;       
    }
    printf("The Number of Digits is : %d\n",iCount);

}

int main()
{
    char Arr [50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    CountDigits(Arr);

    return 0;
}