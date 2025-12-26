#include <iostream>
#include <string>
using namespace std;
enum enprimenotprime { prime = 1, notprime = 2 };

int readpositivenumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number <= 0);  
	return number;   
   }    
                                                      
enprimenotprime checknumber(int number) {

	int m = round(number / 2);        
	for (int counter = 2; counter <= m; counter++) {
		if (number % counter == 0)
			return enprimenotprime::notprime;
	    }                    
	return enprimenotprime::prime;
	                           
       }

void printprimefrom1toN(int number) {
	int i;
	cout << "prime numbers from 1 to "<< number  << "\n";
	for ( i = 1; i <= number; i++)
	{    if(checknumber(i)== enprimenotprime::prime)
		cout << i << "\n";

	}

     }

int main()
{

	printprimefrom1toN(readpositivenumber("please enter a prime number "));

}
