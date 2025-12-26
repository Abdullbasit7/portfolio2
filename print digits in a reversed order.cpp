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

void printdigits(int number) {
	int remainder = 0;
	while (number >0)
	{
		remainder=number%10;
		number = number / 10;
		cout << remainder<<endl;
	}




         }
int main()
{

	printdigits(readpositivenumber("please enter a positive number "));
}

