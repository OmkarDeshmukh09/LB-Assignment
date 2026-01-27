#include<iostream>
using namespace std;

template<class T>
void CopyArray(T *src , T *dest ,int iSize)
{
    int iCnt = 0 ;

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }
    
}

int main()
{
    int iCnt = 0 ;
    int arr[] = {10,20,30,40,50};
    int brr[5];
    
    CopyArray(arr,brr,4);

    cout<<"Coppied Array : \t";
    for ( iCnt = 0; iCnt < 4; iCnt++)
    {
        cout<<brr[iCnt]<<"\t";
    }
    
    cout<<"\n"<<sizeof(brr);

    return 0 ;
}