#include <iostream>

using namespace std;

template <class T>

T Div(T no1, T no2)
{
    return no1 / no2;
}

int main()
{
    int iRet = 0;

    iRet = Div<int>(11, 10);
    cout << "Substraction is :" << iRet << "\n";

    float fRet = 0;

    fRet = Div<float>(11.79f, 10.78f);
    cout << "Substraction is :" << fRet << "\n";

    return 0;
}