#include <iostream>

using namespace std;

float getfractionpart(float number) 
   {
	return number - int(number);
   }


int myround(float number)
 {

	int inpart;
	inpart = int(number);
	float fractionspart = getfractionpart(number);
    
	if (abs(fractionspart) >= .5) {
		if (number > 0)
			return ++inpart;
		else
			return   --inpart;
	}
	else
		return inpart;
 }

float readnumber() {
	float number;
	cout << "Please enter a float number?";
	cin >> number;
	return number;
}

int main()
{

	float number = readnumber();
	cout << "My round Result : " << myround(number) << endl;
	cout << "C++ round Result: " << round(number) << endl;

}

