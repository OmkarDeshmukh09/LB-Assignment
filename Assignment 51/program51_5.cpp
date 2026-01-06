#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr , int iSize )
{
    T *ptr1 = arr;
    T *ptr2 = arr +iSize - 1;
    T temp;

    while (ptr1< ptr2)
    {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 =  temp;

        ptr1++;
        ptr2--;
    }
    
}

int main()
{
    int i = 0 ;

    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    for ( i = 0; i < 9 ; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    
    Reverse(arr,9);

    for ( i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0 ;
}