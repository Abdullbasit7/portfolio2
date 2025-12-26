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

int readnumber() {

	int number;   
	cout << "\nPlease enter a number to search for?\n";  
	cin >> number;
	return number;
     }

int findnumberpositioninarray(int number, int  arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)

		if (arr[i] == number)
			return i;
			return -1;

  } 

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;
	FillArrayWithRandomNumbers(arr, arrlength);

	cout << "\narray elements: ";
	PrintArray(arr, arrlength);

	int number = readnumber();
	cout << "\nnumber you are looking for is:\n" << number << endl;

	short numberposition = findnumberpositioninarray(number, arr, arrlength);

		if (numberposition == -1)
			cout << "The number is not found :-(\n";
		else
		{
			cout << "The number found at position: ";
			cout << numberposition << endl;

			cout << "The number found its order  : ";
			cout << numberposition+1<<endl;

		}


}
