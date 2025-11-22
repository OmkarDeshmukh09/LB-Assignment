#include <stdio.h>

void Pattern(int iNo)
{
    char ch = 'A';
    int iCnt = 0 ;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    
}
int main()
{
    int iValue = 0 ;

    printf("Enter the number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0 ;
}