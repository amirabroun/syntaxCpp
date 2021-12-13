#include <iostream>

using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int x{1};

int main()
{
    cout << "global x in main is: " << x << endl;

    int x{5};

    cout << "local x in mains outer scope  is: " << x << endl;

    {
        int x{7};

        cout << "global x in main`s inner scope is: " << x << endl;
    }

    cout << "local x in mains outer scope  is: " << x << endl;

    useLocal();
    useStaticLocal();
    useGlobal();

    useLocal();
    useStaticLocal();
    useGlobal();

    cout << "local x in main  is: " << x << endl;

    return 0;
}

void useLocal()
{
    int x{25};

    cout << "local x is: " << x << " on entering uselocal" << endl;

    ++x;

    cout << "local x is: " << x << " on exiting uselocal" << endl;
}

void useStaticLocal()
{
    static int x = 50;

    cout << "local static x is: " << x << " on intering usestaticlocal" << endl;

    ++x;

    cout << "local static x is: " << x << " on existing usestaticlocal" << endl;
}

void useGlobal()
{
    cout << "global x is: " << x << " on entering useGlobal" << endl;

    x *= 10;

    cout << "global x is: " << x << " on existing useGlobal" << endl;
}
