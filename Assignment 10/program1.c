#include <stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    double Area = 0 ;

    Area = PI * fRadius * fRadius ;

    return Area;
}

int main()
{
    float fValue = 0;
    double dRet = 0 ;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("The Area of Circle is : %.4lf\n",dRet);

    return 0 ;
}