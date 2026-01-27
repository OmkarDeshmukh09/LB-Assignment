#include <iostream>

using namespace std;

template <class T>

T SecondMax(T *Arr, int iSize)
{
    T Max = Arr[0];
    int iCnt = 0;
    T SecMax=0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < Max && Arr[iCnt] > SecMax)
        {
            SecMax = Arr[iCnt];
        }
    }

    return SecMax;
}

int main()
{
    int Arr[] = {100, 90, 80, 70};

    int Ret = SecondMax<int>(Arr, 4);

    cout << Ret;

    return 0;
}