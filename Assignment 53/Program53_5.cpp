#include <iostream>

using namespace std;

template <class T>
void Replace(int *Arr, int iSize, T oldVal, T newVal)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == oldVal)
        {
            Arr[iCnt] = newVal;
        }
    }
}

int main()
{
    int Arr[] = {100, 10, 10, 10};
    int iCnt = 0;

    Replace(Arr, 4, 10, 11);

    for (iCnt = 0; iCnt < 4; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }

    return 0;
}