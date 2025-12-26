#include <iostream>
#include <cstdlib>

using namespace std;

int randomnumber(int from, int to) {

	int rannum = rand() % (to - from + 1) + from;
	return rannum;
}

void   FillArrayWithRandomNumbers(int arr[100], int& arrlength) {

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

void addarrayelement(int number, int  arr[100], int& arrlength)
{

	arrlength++;
	arr[arrlength - 1] = number;

}
void copyarrayusingaddarrayelement(int arrsource[100], int arrdestination[100], int arrlength, int& arrdestinationlength) {

	for (int i = 0; i < arrlength; i++)
		addarrayelement(arrsource[i], arrdestination, arrdestinationlength);

 }

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength=0, arr2length=0;
	FillArrayWithRandomNumbers(arr, arrlength);

	int arr2[100];

	copyarrayusingaddarrayelement(arr, arr2, arrlength, arr2length);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrlength);

	cout << "\nArray 2 elements after copy:\n";
	PrintArray(arr2, arr2length);

}
