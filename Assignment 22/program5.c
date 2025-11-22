#include <stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] , int iLength , int No )
{
    int iCount = 0 , i = 0 ;

    for (i = 0 ; i < iLength ; i++)
    {
        if (Arr[i] == No)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iRet = 0 , iCnt = 0 , iN = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iValue1);

    printf("Enter the number :");
    scanf("%d",&iValue2);

    p = (int * ) malloc (iValue1 * sizeof(int));

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
    iRet = Frequency(p,iValue1,iValue2);

    printf("Result is %d",iRet);

    free(p);

    return 0 ;
}