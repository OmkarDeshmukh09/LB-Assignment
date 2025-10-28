#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        printf("The number %d is Even number ",iNo);
    }
    else
    {
        printf("The number %d is a Odd number",iNo);
    }
    
}

int main()
{
    int iNum = 0 ;

    printf("Enter number :");
    scanf("%d",&iNum);

    CheckEvenOdd(iNum);

    return 0 ;
}