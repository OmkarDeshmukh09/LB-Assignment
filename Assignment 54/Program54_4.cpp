#include <iostream>

using namespace std;

template <class T>
void Reverse(T *Arr, int iSize)
{
    T *start = Arr;
    T *end = Arr + iSize - 1;
    T temp = 0;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    int Arr[] = {11, 22, 12, 33, 13, 32, 42, 17};
    int iCnt = 0;

    cout << "Before:\n";

    for (iCnt = 0; iCnt < 8; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }

    cout << "\n";

    Reverse<int>(Arr, 8);

    cout << "After:\n";

    for (iCnt = 0; iCnt < 8; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }

    return 0;
}