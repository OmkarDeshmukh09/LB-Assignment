#include <iostream>

using namespace std;

template <class T>
T Min(T *Arr, int iSize)
{
    int iCnt = 0;
    T Min = Arr[0];

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }

    return Min;
}

int main()
{
    int Arr[] = {31, 22, 12, 33, 13, 32, 42, 17};
    int iRet = 0;

    iRet = Min<int>(Arr, 8);

    cout << "Minimum no. is :" << iRet<<"\n";

    return 0;
}