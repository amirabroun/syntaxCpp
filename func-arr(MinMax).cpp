#include <iostream>
using namespace std;

int min(int[], int);
int max(int[], int);

int main()
{
	int n;
	cout << "Enter size array: ";
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Enter number: ";
		cin >> arr[i];
	}

	int minNumber = min(arr, n);
	int maxNumber = max(arr, n);

	cout << "min Number :: " << minNumber << endl;
	cout << "max Number :: " << maxNumber << endl;

	return 0;
}

int min(int arr[], int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int max(int arr[], int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}