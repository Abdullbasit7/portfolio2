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




int countdigitfrequency(short  digittocheck,int number ) {
	int remainder = 0, freqcount = 0;
	while (number > 0)
	{      
		remainder = number % 10;
		number = number / 10;
		if(remainder== digittocheck)
			freqcount++;
	}

	return freqcount;

}
void printalldigitsfrequency(int number) {


	for (int i = 1; i < 10; i++) {
		short digitfrequency;
		digitfrequency = countdigitfrequency(i, number);
		if(digitfrequency>0)
		cout << "digit " << i << " frequency is " << digitfrequency<< " time(s)\n";

	}


}

int main()
{
	int number = readpositivenumber("please enter the main number?");
	printalldigitsfrequency(number);

}			

