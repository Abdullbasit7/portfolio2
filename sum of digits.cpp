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

int sumofdigits(int number) {
	int remainder = 0,sum=0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		sum += remainder;
	}
      return sum;

}


int main()
{
	cout << "\n sum of digits = " << sumofdigits(readpositivenumber("please enter a positive number "));
}

