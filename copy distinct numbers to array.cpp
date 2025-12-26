#include <iostream>

using namespace std;

void   FillArrayWithRandomNumbers(int arr[100], int& arrlength) {

	arrlength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 50;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;

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

int findnumberpositioninarray(int number, int  arr[100], int arrlength)
   {
	 for (int i = 0; i < arrlength; i++)
		if (arr[i] == number)
			return i;
	       return -1; 
   }

bool isnumberinarray(int number, int  arr[100], int arrlength)
  {
	return findnumberpositioninarray(number, arr, arrlength) != -1 ; 
  }


void CopyDistinctNumbersToArray(int arrsource[100], int arrdestination[100], int sourcelength, int& arrdestinationlength)
  {
	for (int i = 0; i < sourcelength; i++)
	{
		if (!isnumberinarray(arrsource[i], arrdestination, arrdestinationlength))
		{
			addarrayelement(arrsource[i], arrdestination, arrdestinationlength);
		}
	}
  }


int main()
{

	int arrsource[100], sourcelength=0, arrdestination[100], destinationlength=0;
	FillArrayWithRandomNumbers(arrsource, sourcelength);

	cout << "\narray elements: ";
	PrintArray(arrsource, sourcelength);

	CopyDistinctNumbersToArray(arrsource, arrdestination, sourcelength, destinationlength);

	cout << "\nArray 2 distinct elements:\n";
	PrintArray(arrdestination, destinationlength);



}

