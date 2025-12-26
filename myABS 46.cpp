#include <iostream>

using namespace std;

float myabs(int number)
  {
	if (number > 0)
		return number;
	else
		return number * -1;
  }

float readnumber() {
	int number;
		cout << "Please enter a number?";
		cin >> number;
	   return number;
}

int main()
{

	float number = readnumber();
	cout << "My abs Result : " << myabs(number) << endl; 
	cout << "C++ abs Result: " << abs(number) << endl;

}

