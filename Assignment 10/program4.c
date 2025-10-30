#include <stdio.h>
double FhtoCs(float fTemp)
{
    double dCelsius = 1.0 ;

    dCelsius =( (fTemp - 32) * (5.0 / 9.0 ));

    return dCelsius;
}

int main()
{
    float  fValue = 0.0 ;
    double dRet   = 0.0 ;

    printf("Enter  Temperatur in Faherenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The %0.2f Fahrenheit to Calsius is : %lf",fValue,dRet);

    return 0 ;
}