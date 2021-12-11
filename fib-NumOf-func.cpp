#include <iostream>
using namespace std;

long int fib(int);

int main()
{
  int n, i = 0;
  cout << "Enter a positive integer: ";
  cin >> n;
  while (i < n)
  {
    cout << " " << fib(i);
    i++;
  }
  return 0;
}
long int fib(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fib(n - 1) + fib(n - 2));
}