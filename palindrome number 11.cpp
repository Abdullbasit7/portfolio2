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

int reversenumber(int number) {
	int remainder = 0, number2 = 0;
	
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + remainder;
	}
	return number2;
}


bool itspalindromenumber(int number) {
	
	return number == reversenumber(number);
}
int main()
{
	if (itspalindromenumber(readpositivenumber("please enter a positive number ")))
		cout << "\nyes , it is a palindrome number.\n ";
	else
		cout << "\nno , it is not a palindrome number.\n ";
	return 0;
}



