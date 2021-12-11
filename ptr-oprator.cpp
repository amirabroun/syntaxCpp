#include <iostream>
using namespace std;

int main()
{
    float number_1 = 1;
    float *ptr = &number_1;

    float number_2 = 1;
    float *ptr_2 = &number_2;

    float number_3 = 1;
    float *ptr_3 = &number_3;

    cout << ptr << endl;

    cout << ptr_2 << endl;

    cout << ptr_3 << endl;
    
    return 0;
}
