#include <stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] , int iLength , )
{
    int iEven = 0 , i = 0 , iOdd = 0 ;

    for (i = 0 ; i < iLength ; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            iEven++;
        }
        if (Arr[i] % 2 != 0)
        {
            iOdd++;
        }
    }
    return ( iEven - iOdd );
}

int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 , iN = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int * ) malloc (iSize * sizeof(int));

    //Memory unavailable
    if (p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements ",iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element  %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Frequency(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0 ;
}