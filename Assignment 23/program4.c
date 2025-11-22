#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


void Range(int Arr[],int iLength , int iStart, int iEnd)
{
    int i = 0 , iCount = 0 ;

    for (i = 0 ; i < iLength ; i++)
    {
        if (Arr[i] >= iStart && Arr[i] <= iEnd )
        {
            printf("%d\t",Arr[i]);
            iCount++;
        }
    }
    if (iCount == 0)
    {
        printf("No Matching number.");
    }
          
}

int main()
{
    int iCnt = 0 , iLength = 0, iValue1 = 0 , iValue2 = 0 ;
    int * p = NULL;

    printf("Enter number's of element : ");
    scanf("%d",&iLength);

    printf("Enter the Start number ");
    scanf("%d",&iValue1);

    printf("Enter the End number ");
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

    Range( p, iLength , iValue1, iValue2);

    free(p);

    return 0;
} 