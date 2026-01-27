#include <iostream>

using namespace std;

template <class T>
T SumEven(T *Arr, int iSize)
{
    int iCnt = 0;
    T Sum=0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            Sum = Sum + Arr[iCnt];
        }
    }
    return Sum;
}

int main()
{
    int Arr[] = {11, 22,12, 33, 13, 32, 42, 17};
    int bRet = 0;

    bRet = SumEven<int>(Arr, 8);

    cout << "Summation is : " << bRet << "\n";

    return 0;
}