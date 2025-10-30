#include <stdio.h>

void Number(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo <= 50)
    {
        printf("Small Number");
    }
    else if (iNo > 50 && iNo <=100)
    {
        printf("Medium Number");
    }
    else
    {
        printf("Large Number");
    }
    
    
    
}

int main ()
{
    int iValue = 0 ;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Number(iValue); 

    return 0 ;
}