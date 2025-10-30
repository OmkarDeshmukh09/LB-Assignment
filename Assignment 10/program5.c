#include <stdio.h>

double SquareMeter(int iValue)
{
    float fSquareft = 0.0929 ;
    double Area    = 0.0 ;

    Area = fSquareft * iValue ;
    
    return Area ;
}

int main ()
{
    int iValue  = 0 ;
    double dRet = 0.0 ; 

    printf("Enter Area in Square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The Area of Square in Square meter is : %.4lf",dRet); 

    return 0 ;
}