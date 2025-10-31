#include <stdio.h>
#include <stdbool.h>

bool IsDivisiable(int iNo)
{
    if (iNo % 5 == 0)
    {
        return true ;
    }
    else
    {
        return false ;
    }
    
}

int main(void)
{
    int iValue = 0 ;
    bool bRet = 0 ;

    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("%s\n", IsDivisiable(iValue) ? "Yes" : "No" );

    return 0 ;

}
