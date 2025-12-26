#include <iostream>
#include <cstdlib>

using namespace std;

int readpositivenumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}


int randomnumber(int from, int to) {

	int rannum = rand() % (to - from + 1) + from;
	return rannum;
}

void   FillArrayWithRandomNumbers(int arr[100], int& arrlength) {

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

void sumarrays(int arr1[100], int arr2[100],int arrsum[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{

		arrsum[i] = arr1[i] + arr2[i];

	}

}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;

	 arrlength = readpositivenumber("How many elements ?\n");

	FillArrayWithRandomNumbers(arr, arrlength);

	int arr2[100];

	FillArrayWithRandomNumbers(arr2, arrlength);


	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrlength);

	cout << "\nArray 2 elements:\n";
	PrintArray(arr2, arrlength);

	int arrsum[100] = {0};

	sumarrays(arr, arr2,arrsum, arrlength);

	cout << "\nSum of array1 and array2 elements:\n";     
	PrintArray(arrsum, arrlength);
}
