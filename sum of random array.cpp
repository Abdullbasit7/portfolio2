#include <iostream>
#include <cstdlib>

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
		arr[i] = randomnumber(1, 100);
	}
	cout << endl;

}

void PrintArray(int arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

int sumarray(int arr[100], int& arrlength) {
	int sum = 0;
	for (int i = 0; i < arrlength; i++)
	{
		sum += arr[i];
	}
	return  sum;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;
	FillArrayWithRandomNumbers(arr, arrlength);
	cout << "\narray elements: ";
	PrintArray(arr, arrlength);
	cout << "\nsum of all Number is : ";
	cout << sumarray(arr, arrlength) << endl;

}
