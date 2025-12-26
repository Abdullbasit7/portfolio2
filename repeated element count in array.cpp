#include <iostream>
using namespace std;

int readpositivenumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
  }

void  ReadArray(int arr[100], int& arrlength) {

	cout << "\nEnter number of elements:\n";
	cin >> arrlength;
	cout << "\nEnter array of elements:\n";
	for (int i = 0; i < arrlength; i++)
	{
		cout << "Element [" << i + 1 << "} : ";
		cin >> arr[i];
	}
	cout << endl;

  }


void PrintArray(int arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++) 
			cout << arr[i]<<" ";

		cout << "\n";
	}
int TimesRepeated(int Number ,int arr[100] ,int arrlength) {
	int count = 0;
	for ( int i = 0; i <= arrlength; i++)
	{
		if (Number == arr[i])
		{
			count++;
	    }
		
	}

	return count;

}


int main()
{
	int arr[100], arrLength, NumberToCheck;
	ReadArray(arr, arrLength);
	NumberToCheck = readpositivenumber("Enter the number you want to check: ");
	cout << "\nOriginal array: ";  
	PrintArray(arr, arrLength);

	cout << "\nNumber " << NumberToCheck;   
	cout << " is repeated ";   
	cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";



}