#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


int LastOcc(int Arr[],int iLength , int iNo)
{
    int i = 0 , itemp = 0;

    for (i = 0 ; i < iLength ; i++)
    {
        if (Arr[i]  == iNo)
        {
            itemp = i;
        }
    }
    if (itemp == 0)
    {
        itemp = -1;
    }
    return itemp ;        
}

int main()
{
    int iCnt = 0 , iLength = 0, iValue2 = 0 ;
    int iRet = 0 ;
    int * p = NULL;

    printf("Enter number's of element : ");
    scanf("%d",&iLength);

    printf("Enter the number ");
    scanf("%d",&iValue2);

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

    iRet = LastOcc( p, iLength ,iValue2);

    if (iRet == -1)
    {
        printf(" There is no such number ");
    }
    else
    {
        printf(" Last occurrenc of number  is %d ",iRet);
    }

    free(p);

    return 0;
} 