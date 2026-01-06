#include<iostream>
using namespace std;

template<class T>
T Multiply(T No1 , T No2)
{
    T ans;
    ans = No2 * No1 ;
    return ans;
}

int main()
{
    int iRet = Multiply(10,20);
    cout<<"Multiplication is : "<<iRet<<"\n";

    float fRet = Multiply(10.0f,20.0f);
    cout<<"Multiplication is : "<<fRet<<"\n";

    return 0 ;
}