#include <iostream>
using namespace std;

int main()
{
  while (1)
  {
    for (int i = 0; i < 10; i++)
      cout << "Pasho boro dars bekhoon :/"
           << "  ";
    cout << "\nPa shashodi? <n/y>";
    char c;
    cin >> c;

    if (c == 'y')
    {
      cout << "\nAfarin bache khoob :)" << endl;
      break;
    }
  }

  return 0;
}