#include <iostream>
#include <cstdlib>

using namespace std;

enum enprimenotprime { prime = 1, notprime = 2 };

enprimenotprime checkprime(int number) {
	int  m = round(number / 2);
	for (int counter = 2; counter <= m; counter++) {
		if (number % counter == 0)
			return enprimenotprime::notprime;
	}
	return enprimenotprime::prime;

}

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

void addarrayelement(int number, int  arr[100], int& arrlength)
{

	arrlength++;
	arr[arrlength - 1] = number;

}

void CopyPrimeNumbers(int arrsource[100], int arrdestination[100], int arrlength, int& arrdestinationlength) {
	int counter = 0;
	for (int i = 0; i < arrlength; i++) {
		if (checkprime(arrsource[i]) == enprimenotprime::prime)
		{
			addarrayelement(arrsource[i], arrdestination, arrdestinationlength);
		}
			
	}
	
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;
	FillArrayWithRandomNumbers(arr, arrlength);

	int arr2[100], arr2length = 0;

	CopyPrimeNumbers(arr, arr2, arrlength, arr2length);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrlength);

	cout << "\nArray 2 Prime numbers:\n";
	PrintArray(arr2, arr2length);


}
