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

void copyarray(int arrsource[100], int arrdestination[100] ,int arrlength) {

	for (int i = 0; i < arrlength; i++)
		arrdestination[i] = arrsource[i];
	
}

int main()
{     
	srand((unsigned)time(NULL));

	int arr[100], arrlength;
	FillArrayWithRandomNumbers(arr, arrlength);

	int arr2[100] ;
	
	 copyarray(arr,arr2, arrlength) ;

	 cout << "\nArray 1 elements:\n";
	 PrintArray(arr, arrlength);

	 cout << "\nArray 2 elements after copy:\n";
	 PrintArray(arr2, arrlength);

}
