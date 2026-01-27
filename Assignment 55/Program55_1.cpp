#include <iostream>

using namespace std;

template <class T>

T Add(T no1, T no2)
{   
    return no1 + no2;
}

int main()
{
    int iRet = 0;

    iRet = Add<int>(11, 10);
    cout << "Addition is :" << iRet << "\n";

    float fRet = 0;

    fRet = Add<float>(11.79f, 10.78f);
    cout << "Addition is :" << fRet << "\n";

    return 0;
}