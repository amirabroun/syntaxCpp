#include <iostream>
using namespace std;

class multiple
{
private:
    int x, y;

public:
    void putup(int num1, int num2)
    {
        x = num1;
        y = num2;
    }
    int mult()
    {
        return x * y;
    }
};

int main()
{
    multiple memmber;
    memmber.putup(99, 78);
    cout << memmber.mult();
    return 0;
}
