#include <iostream>

using namespace std;

template<class T>
bool Search(T *Arr, int iSize, T Value)
{
    int iCnt = 0;
    bool flag = false;

    for (iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if (Arr[iCnt] == Value)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    float Arr[] = {11.33f, 22.55f, 12.34f, 33.5f, 13.87f, 32.5f, 42.7879f, 17.66f};
    bool bRet = false;

    bRet = Search<float>(Arr, 8, 13);

    if (bRet == true)
    {
        cout << "It is present\n";
    }
    else
    {
        cout << "It is absent\n";
    }

    return 0;
}