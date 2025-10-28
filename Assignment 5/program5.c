#include<stdio.h>

void FindLargest(int iNo1,int iNo2,int iNo3)
{
    if(iNo1 > iNo2 && iNo1 >iNo3)
    {
        printf("This Number %d is the Gratest .",iNo1);
    }
    else if(iNo2 > iNo1 && iNo2 > iNo3)
    {
        printf("This Number %d is the Gratest .",iNo2);
    }
    else 
    {
        printf("This Number %d is the Gratest .",iNo3);
    };
}

int main()
{
    int iNum1,iNum2,iNum3;
    
    printf("Enter Three Numbers : \n");
    scanf("%d\n %d\n %d\n ",&iNum1,&iNum2,&iNum3);

    FindLargest(iNum1,iNum2,iNum3);
    
    return 0;
}