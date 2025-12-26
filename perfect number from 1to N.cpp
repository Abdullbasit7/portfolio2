#include <iostream>
#include <string>

using namespace std;

int readpositivenumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}

bool isperfectnumber(int number) {
	int counter, sum = 0;
	for (counter = 1; counter < number; counter++) {
		if (number % counter == 0)
			sum += counter;
	}
	return number == sum;

}



void printperfectnumbersfrom1toN(int number) {

	for (int i = 1; i <= number; i++)
		if (isperfectnumber(i))
		{
			cout << i << endl;

		}


}

int main()
{

	printperfectnumbersfrom1toN(readpositivenumber("please enter a positive number "));

}
