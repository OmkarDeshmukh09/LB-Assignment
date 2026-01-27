#include <iostream>

using namespace std;

template <class T>
T SecondMin(T *Arr, int iSize)
{
    T Min = Arr[0];
    int iCnt = 0;
    T SecMin;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > Min && Arr[iCnt] <SecMin)
        {
            SecMin = Arr[iCnt];
        }
    }

    return SecMin;
}

int main()
{
    int Arr[] = {100, 90, 80, 70};

    int Ret = SecondMin<int>(Arr, 4);

    cout << Ret;

    return 0;
}