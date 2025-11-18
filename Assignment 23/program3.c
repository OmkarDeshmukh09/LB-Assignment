#include <stdio.h>
#include <stdlib.h>

int LastOccr(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    short int iFlag = 0;

    for (iCnt = iSize; iCnt >= 0; iCnt--)
    {
        if (iNo == Arr[iCnt])
        {
            iFlag = iCnt;
            break;
        }
        else
        {
            iFlag = -1;
        }
    }

    return iFlag;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the no. of element\n");
    scanf("%d", &iLength);

    printf("Enter the number to check\n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (NULL == ptr)
    {
        printf("Unable to allocate the memory\n");
    }

    printf("Enter the element:\n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = LastOccr(ptr, iLength, iValue);

    if (iRet == -1)
    {
        printf("There is no such number present.\n");
    }
    else
    {
        printf("The last Occurence of number is in %d ", iRet);
    }
    free(ptr);

    return 0;
}