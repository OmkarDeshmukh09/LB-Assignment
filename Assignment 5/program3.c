#include<stdio.h>

CheckLeapYear(int iNo)
{
    if (year % 400 == 0)
    {
        printf("%d is a Leap Year.\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is NOT a Leap Year.\n", year);
    }
    else if (year % 4 == 0)
    {    
        printf("%d is a Leap Year.\n", year);
    }
    else    
    {
        printf("%d is NOT a Leap Year.\n", year);
    }
}

int main()
{
    int iYear = 0 ;

    printf("Enter Year : \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return 0 ;
}