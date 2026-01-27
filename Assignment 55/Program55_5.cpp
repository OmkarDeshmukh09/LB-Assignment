#include <iostream>

using namespace std;

template <class T>
T Max(T A, T B, T C, T D)
{

    if (A == B && A == C && A == D)
    {
        cout << "All values are same\n";
        return -1;
    }

    if (A > B && A > C && A > D)
    {
        return A;
    }
    else if (B > A && B > C && B > D)
    {
        return B;
    }
    else if (C > B && C > A && C > D)
    {
        return C;
    }
    else
    {
        return D;
    }
}

int main()
{
    int Ret = 0;
    Ret = Max<int>(11, 111, 21, 31);
    
    cout << "Maximum is :" << Ret << "\n";

    return 0;
}