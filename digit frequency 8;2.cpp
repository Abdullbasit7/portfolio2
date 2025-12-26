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




int countdigitfrequency(short  digittocheck, int number) {
	int remainder = 0, freqcount = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		if (remainder == digittocheck)
			freqcount++;
	}

	return freqcount;

}
int main()
{
	int number = readpositivenumber("please enter the main number?");
	short  digittocheck = readpositivenumber("please enter one digit to check?");
		cout << "\ndigit " << digittocheck << " frequency is " << countdigitfrequency(digittocheck , number) << " time(s)\n";
}

