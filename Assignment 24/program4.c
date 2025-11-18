#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iSize, int iNo1, int iNo2)
{
    int iCnt = 0;

    printf("Elements in range is :\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iNo1 && Arr[iCnt] < iNo2)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iStart = 0;
    int iEnd = 0;

    printf("Enter the no. of element\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (NULL == ptr)
    {
        printf("Unable to allocate the memory\n");
    }
    printf("Enter starting point:\n");
    scanf("%d", &iStart);

    printf("Enter Ending point:\n");
    scanf("%d", &iEnd);

    printf("Enter the element:\n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Range(ptr, iLength, iStart, iEnd);

    free(ptr);

    return 0;
}