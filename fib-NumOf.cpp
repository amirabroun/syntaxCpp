#include <iostream>
using namespace std;

int main()
{
	int n;
	int t1 = 0, t2 = 1, t3;
	cout << "Enter the number of terms: ";
	cin >> n;

	cout << "Fibonacci Series: ";

	for (int i = 1; i <= n; ++i)
	{
		// Prints the first two terms.
		if (i == 1)
		{
			cout << t1;
			if (i != n)
				cout << " ,";
			continue;
		}
		if (i == 2)
		{
			cout << t2;
			if (i != n)
				cout << " ,";
			continue;
		}
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;

		cout << t3;
		if (i != n)
			cout << " ,";
	}
	return 0;
}