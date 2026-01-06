#include<iostream>
using namespace std;

template<class T>
T Max(T No1 , T No2 , T No3)
{
    T maxi ;
    if (No1 > No2 && No1 > No3)
    {
        return No1;
    }
    else if (No2 > No1 && No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }    
}

int main()
{
    int iRet = Max(10,45,20);
    cout<<"Multiplication is : "<<iRet<<"\n";

    float fRet = Max(11.2f,10.0f,20.0f);
    cout<<"Multiplication is : "<<fRet<<"\n";

    return 0 ;
}