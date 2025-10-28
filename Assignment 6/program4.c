#include<stdio.h>

int Multiply( int iNo1 , int iNo2 , int iNo3 )
{
    int iMulti = 0 ;

    if (iNo1 == 0 || iNo2 == 0 || iNo3 ==0)
    {
        printf("Enter a Valid input");
        return 0;
    }
    else
    {
        iMulti= iNo1 * iNo2 * iNo3;
        return iMulti;
    }
    
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter  number's with space : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
/*
    printf("Please enter 2'nd number : \n");
    scanf("%d",&iValue2);

    printf("Please enter 3'rd number : \n");
    scanf("%d",&iValue3);
*/
    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("The Multiplication is : %d ",iRet);

    return 0;
}