#include <iostream>
using namespace std;


void  FillArray(int arr[100], int& arrlength) {

	cout << "\nEnter number of elements:\n";
	cin >> arrlength;
	cout << "\nEnter array of elements:\n";
	for (int i = 0; i < arrlength; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
}


void PrintArray(int arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}


bool ispalindromenumber(int arr[100], int length)
 {

	for (int i = 0; i < length; i++)
	{
		if (arr[i]!=arr[length-i-1])
		{
			return false;
		}
	}

	return true;

 }






int main()
{
	int arr[100], arrlength = 0;

	FillArray(arr, arrlength);

	cout << "\narray elements: ";
	PrintArray(arr, arrlength);
  
	if (ispalindromenumber(arr, arrlength))
		cout << "\nyes , it is a palindrome number.\n ";
	else
		cout << "\nno , it is not a palindrome number.\n ";



}

