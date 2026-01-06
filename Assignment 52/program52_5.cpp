#include<iostream>
using namespace std;

template<class T>
T Max(T *arr ,int iSize)
{
    T Max = arr[0];
    int iCnt = 0 ;    

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Max > arr[iCnt])
        {
            Max = arr[iCnt] ;
        }
    }
    return Max;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.101,3.7,9.8,8.7};
    
    int iSum = Max(arr,5);
    cout<<"The Maximum is : "<<iSum<<"\n";

    float fSum = Max(brr,4);
    cout<<"The Maximum is : "<<fSum<<"\n";

    return 0 ;
}