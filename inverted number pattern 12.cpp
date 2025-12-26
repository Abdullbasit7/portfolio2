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

void printinvertednumber(int number) {
	cout << "\n";
	for (int i = number; i > 0; i--) {
		for (int j = 1; j <= i; j++)
		{
			cout << i ;
		}
		cout << "\n";
	}


     }

int main()
{
	printinvertednumber(readpositivenumber("please enter the main number?"));
}