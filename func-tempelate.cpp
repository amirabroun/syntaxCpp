#include <iostream>
using namespace std;

template <class T>
T getMax(T var_1, T var_2)
{
    T result;
    result = (var_1 > var_2) ? var_1 : var_2;
    return (result);
}

int main()
{
    cout << getMax<int>(12, 13) << endl;

    cout << getMax<double>(12.14, 12.13) << endl;

    cout << getMax<char>('b', 'd') << endl;

    return 0;
}