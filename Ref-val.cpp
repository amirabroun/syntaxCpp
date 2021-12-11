#include <iostream>
using namespace std;
// value
void F1(int number)
{
	number += 10;
	cout << "value of number inside method is " << number << "." << endl;
}
// refrence
void F2(int &number)
{
	number += 10;
	cout << "value of number inside method is" << number << "." << endl;
}

int main()
{
	int num = 5;
	
	cout << "num = " << num << endl;

	cout << "pasing num by value to method F1()" << endl;
	F1(num);
	cout << "after " << num << endl << endl;

	cout << "pasing num by value to method F2()" << endl;
	F2(num);
	cout << "after " << num << endl;

	return 0;
}
