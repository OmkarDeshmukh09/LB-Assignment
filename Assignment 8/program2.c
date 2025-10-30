#include <stdio.h>

void DisplayDigitsInWords( int iNo)
{
    if (iNo < 0)
    {
        iNo = - iNo;
    }

    if (iNo > 9)
    {
        printf("Enter a Valid input ( 0 - 9 ) \n");
        return;
    }
    
    switch (iNo)
    {
        case 0:
            printf(" Zero \n");
            break;
        case 1:
            printf(" One \n");
            break;
        case 2:
            printf(" Two \n");
            break;
        case 3:
            printf(" Three \n");
            break;
        case 4:
            printf(" Four \n");
            break;
        case 5:
            printf(" Five \n");
            break;
        case 6:
            printf(" Six \n");
            break;
        case 7:
            printf(" Seven \n");
            break;
        case 8:
            printf(" Eight \n");
            break;
        case 9:
            printf(" Nine \n");
            break;
        
        default:
            printf("Invalid Input ");
            break;
    }
    
    
}

int main()
{
    int iValue = 0 ;
    
    printf("Enter A Number : \n");
    scanf("%d",&iValue);

    DisplayDigitsInWords(iValue);

    return 0 ;
}