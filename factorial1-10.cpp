#include <iostream>
using namespace std;

long int factorial(int);

int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        arr[i] = (i + 1);
    }

    for(int i = 0; i < 10; i++)
    {
        arr[i] = factorial(arr[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        cout << (i + 1) << "! = " << arr[i] << endl;
    }


    return 0;
}

long int factorial(int n)
{
    if(n <= 1)
        return 1;
    else 
        return n * factorial(n - 1);
}