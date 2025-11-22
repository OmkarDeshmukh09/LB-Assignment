#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


int Maximum(int Arr[],int iLength)
{
    int i = 0 , iMax = Arr[0] ;

    for (i = 0 ; i < iLength ; i++)
    {
        if (Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;  
}

int main()
{
    int iCnt = 0 , iSize = 0 , iRet = 0 ;
    int * p = NULL;

    printf("Enter number's of element : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    //Memory unavailable
    if (p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements : ",iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element  %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum( p, iSize);

    printf("The Maximum No is : %d",iRet);

    free(p);

    return 0;
} 