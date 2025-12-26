#include <iostream>
#include <cstdlib>

using namespace std;

int readnumber() {

	int number;
	cout << "\nPlease enter a number? "; 
	cin >> number;
	return number;
}

void addarrayelement(int number, int  arr[100], int & arrlength)
{

	arrlength++;
	arr[arrlength - 1] = number;
		
}


void   inputusernumbersinarray(int arr[100], int& arrlength) {
	 
	bool addmore = true;
	do
	{
		addarrayelement(readnumber(), arr, arrlength);
		cout << "\ndo you want to add more numbers? [0]:no,[1]:yes? ";
		cin >> addmore;


	} while ( addmore );
	

}



void PrintArray(int arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

int main()
{

	int arr[100], arrlength=0;
	inputusernumbersinarray(arr, arrlength);

	cout << "\narray length: "<< arrlength<<endl;
	cout << "array elements: ";
	PrintArray(arr, arrlength);




	
	

}



