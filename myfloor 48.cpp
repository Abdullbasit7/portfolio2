#include <iostream>

using namespace std;


int myfloor(float number)
{

	
	if (number > 0)
		return int(number);
	else
		return int(number) - 1;
}

float readnumber() {
	float number;
	cout << "Please enter a  number?";
	cin >> number;
	return number;
}

int main()
{

	float number = readnumber();
	cout << "My floor Result : " << myfloor(number) << endl;
	cout << "C++ floor Result: " << floor(number) << endl;

}

