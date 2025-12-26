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

int sumarray(int arr[100], int arrlength) {
	int sum = 0;
	for (int i = 0; i < arrlength; i++)
	{
		sum += arr[i];
	}
	return  sum;
}
float averagearray(int arr[100], int arrlength)
   {
	return (float)sumarray(arr, arrlength) / arrlength;
  }


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;
	FillArrayWithRandomNumbers(arr, arrlength);
	cout << "\narray elements: ";
	PrintArray(arr, arrlength);
	cout << "\naverage of all Number is : ";
	cout << averagearray(arr, arrlength) << endl;

}
