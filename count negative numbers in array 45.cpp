#include <iostream>
using namespace std;



int randomnumber(int from, int to) {

	int rannum = rand() % (to - from + 1) + from;
	return rannum;
}

void   FillArrayWithRandomNumbers(int arr[100], int& arrlength) {

	cout << "\nEnter number of elements:\n";
	cin >> arrlength;
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = randomnumber(-100, 100);
	}
	cout << endl;

}

void PrintArray(int arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

int negativecount(int arr[100], int arrlength) {
	int count = 0;
	for (int i = 0; i < arrlength; i++)
	{
		if (arr[i] < 0)
		{
			count++;
		}
	}
	return  count;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;
	FillArrayWithRandomNumbers(arr, arrlength);
	cout << "\narray elements: ";
	PrintArray(arr, arrlength);

	cout << "\nNegative Number count is : ";
	cout << negativecount(arr, arrlength) << endl;

}
