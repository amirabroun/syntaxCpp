#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    cout << "tarikh ra vared konid" << endl;
    cout << "month: ";
    int x;
    cin >> x;

    cout << "day: ";
    int y;
    cin >> y;

    if (x <= 6)
        sum += ((x - 1) * 31);

    if (6 < x && x <= 12)
    {
        sum += (6 * 31);
        sum += ((x - 7) * 30);
    }

    sum += y;

    cout << endl << sum << "- day of the year";
    return 0;
}