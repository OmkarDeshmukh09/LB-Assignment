#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[] , int iLength)
{
    int iCnt = 0 , i = 0;

    for (i = 0 ; i < iLength ; i++)
    {
        if (Arr[i]  == 11)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iSize = 0 , iCnt = 0;
    int *p = NULL;
    bool bRet = 0 ;

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
    bRet = Check(p,iSize);

    if (bRet == true)
    {
        printf(" 11 is Present ");
    }
    else
    {
        printf(" 11 is Absent ");
    }

    free(p);

    return 0 ;
}