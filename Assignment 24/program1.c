#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int BOOL;

BOOL Check(int Arr[],int iLength , int iNo)
{
    int iEven = 0 , i = 0 , iOdd = 0 ;

    for (i = 0 ; i < iLength ; i++)
    {
        if (Arr[i]  == iNo)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 , iValue1 = 0, iValue2 = 0 ;
    bool bRet = false ;
    int * p = NULL;

    printf("Enter number's of element : ");
    scanf("%d",&iValue1);

    printf("Enter the number ");
    scanf("%d",&iValue2);

    p = (int *)malloc(iValue1 * sizeof(int));

    //Memory unavailable
    if (p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements ",iValue1);

    for (iCnt = 0; iCnt < iValue1; iCnt++)
    {
        printf("Enter element  %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet =Check( p, iValue1 ,iValue2);

    if (bRet == true)
    {
        printf(" Number is Present ");
    }
    else
    {
        printf(" Number is not Present ");
    }

    free(p);

    return 0;
} 