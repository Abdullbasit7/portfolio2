#include <iostream>

using namespace std;



int mysqrt(float number)
{
	return pow(number,0.5);
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
	cout << "My floor Result : " << mysqrt(number) << endl;
	cout << "C++ floor Result: " << sqrt(number) << endl;

}

