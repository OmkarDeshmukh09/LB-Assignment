#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Freq(int Arr[] , int iLength)
{
    int iCount = 0 , i = 0;

    for (i = 0 ; i < iLength ; i++)
    {
        if (Arr[i]  == 11 )
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0 , iCnt = 0;
    int *p = NULL;
    int iRet = 0 ;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int * ) malloc (iSize * sizeof(int));

    //Memory unavailable
    if (p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element  %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Freq(p,iSize);

    printf("Output : %d",iRet);

    free(p);

    return 0 ;
}