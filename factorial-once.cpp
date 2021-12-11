#include <iostream>
using namespace std;

long int factorial(int);

int main()
{
    int x, y;
    cin >> x;

    y = factorial(x);
    cout << y;
    return 0;
}

long int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}