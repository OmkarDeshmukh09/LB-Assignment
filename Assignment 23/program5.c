#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


int OddProduct(int Arr[],int iLength)
{
    int i = 0 , iMulti = 1 ;

    for (i = 0 ; i < iLength ; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            iMulti = iMulti * Arr[i];
        }
    }
    if (iMulti > 1)
    {
        return iMulti;
    }
    else
    {    
        return (0);
    }  
}

int main()
{
    int iCnt = 0 , iLength = 0 , iRet = 0;
    int * p = NULL;

    printf("Enter number's of element : ");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    //Memory unavailable
    if (p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements ",iLength);

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element  %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = OddProduct( p, iLength);

    if (iRet <= 0)
    {
        printf("The No Odd numbers found");
    }
    else
    {
        printf("The Product is : %d",iRet);
    }

    free(p);

    return 0;
} 