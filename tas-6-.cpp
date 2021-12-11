#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    char returntas = 'y';
    do
    {
        cout << rand() % 6 + 1 << endl;

        cout << "return: <y/n> ";
        cin >> returntas;
    } while (returntas == 'y');

    return 0;
}