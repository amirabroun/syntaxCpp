#include <iostream>
using namespace std;

const int MAX = 3;

int main()
{
    int var[MAX] = {10, 23, 32};

    int *ptr;
    ptr = var;

    for (int i = 0; i < 3; i++)
    {
        cout << "address of var [" << i << "] = " << ptr << endl;
        cout << "this is your value : [" << i << "] = " << *ptr << endl;
        ptr++;
    }

    return 0;
}
