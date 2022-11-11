#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int* arr = new int[x];
	
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}

	int max = INT_MIN;

	for (int j = 0; j < x; j++)
	{
		if (arr[j] > max)
			max = arr[j];
	}

	cout << max << endl;
	delete[] arr;
}