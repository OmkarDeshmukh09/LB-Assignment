#include <iostream>

using namespace std;

template <class T>
void Swap(T &no1, T &no2)
{
    T temp = no1;
    no1 = no2;
    no2 = temp;
}

int main()
{
    int A = 11;
    int B = 21;

    Swap(A, B);

    cout << A << "\n";
    cout << B << "\n";

    return 0;
}