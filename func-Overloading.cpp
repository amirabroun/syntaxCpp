#include <iostream>

using namespace std;

int max(int, int);
int max(int, int, int);
double max(double, double);

int main()
{
    cout << max(1201, 20) << endl;

    cout << max(12, 2013, 14) << endl;

    cout << max(12.23, 28.45) << endl;

    return 0;
}

int max(int number1, int number2)
{
    int result = (number1 > number2) ? number1 : number2;
    return (result);
}

int max(int number1, int number2, int number3)
{
    if (number1 > number2 && number1 > number3)
        return (number1);
    else if (number2 > number1 && number2 > number3)
    {
        return (number2);
    }
    else
        return (number3);
}

double max(double number1, double number2)
{
    double result = (number1 > number2) ? number1 : number2;
    return (result);
}
