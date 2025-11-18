#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0;
    int iPro=1;

    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 1 )
        {
            iPro=iPro*Arr[iCnt];
        }
    }
    return iPro;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the no. of element\n");
    scanf("%d", &iLength);

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

    iRet = Product(ptr, iLength);
    printf("The product of odd element is : %d", iRet);

    free(ptr);

    return 0;
}