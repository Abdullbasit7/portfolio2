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

void Swap(int& A, int& B)
{
	int Temp; 
	Temp = A;
	A = B;
	B = Temp;
}

void   FillArrayWithRandomNumbers(int arr[100], int& arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = i+1;
	}
	cout << endl;

}

void PrintArray(int arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

void ShuffleArray(int arr[100] , int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{

		Swap(arr[randomnumber(1, arrlength)-1] , arr[randomnumber(1, arrlength) - 1]);

	}
   }

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;

	arrlength = readpositivenumber("\nEnter number of elements : \n");

	FillArrayWithRandomNumbers(arr, arrlength);


	cout << "\nArray elements before shuffle:\n";
	PrintArray(arr, arrlength);

	ShuffleArray(arr, arrlength);

	cout << "\nArray elements after shuffle:\n";
	PrintArray(arr, arrlength);
}
