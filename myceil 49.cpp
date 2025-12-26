#include <iostream>

using namespace std;

float getfractionpart(float number)
{
	return number - int(number);
}

int myceil(float number)
{

	if (abs(getfractionpart(number)) > 0) {
		if (number > 0)
			return int(number) + 1;
		else
			return int(number);
	}
		return number;
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
	cout << "My floor Result : " << myceil(number) << endl;
	cout << "C++ floor Result: " << ceil(number) << endl;

}

