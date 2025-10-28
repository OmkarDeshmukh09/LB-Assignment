#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fPercnt = 0;
    if (iNo1 == 0)
    {
        printf("Total marks cannot be zero.\n");
        return 0.0;
    }
    else
    {
        fPercnt = ((float)iNo2/iNo1)*100;

        return fPercnt;
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0 ;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d",&iValue1);

    printf("Please enter marks obtained : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("the percentage is : %0.2f %%",fRet);

    return 0 ;
}