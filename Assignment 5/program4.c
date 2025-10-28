#include<stdio.h>

void CheckNumType(int iNo)
{
    if(iNo > 0)
    {
        printf("This Number %d is a Positive Number .",iNo);
    }
    else if(iNo == 0)
    {
        printf("This Number %d is a Zero .",iNo);
    }
    else
    {
        printf("This Number %d is a Negitive Number .",iNo);
    };
}

int main()
{
    int iNum = 0;

    printf("Enter Number : ");
    scanf("%d",&iNum);

    CheckNumType(iNum);
    
    return 0;
}