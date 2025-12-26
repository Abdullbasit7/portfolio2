#include <iostream>
using namespace std;

string readpassword(string massege) 
  {
	cout<<massege << endl;
	string password = "";
	cin >> password;
	return password;
   }



bool printwordsfromaaatozzz(string originalpassword) 
 {

	cout << "\n";

	string word = "";
	int counter = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				counter++;
				cout << "trail [" << counter << "] : " << word << endl;
					if (  word == originalpassword  )
					{
						cout << "\npassword is " << word << endl;
						cout << "found after " << counter<<"trail(s)" << word;
						
						return true;
					}
					
					word = "";

			}
		}


 	}
	return false;
  }
  int main()
  {
	printwordsfromaaatozzz(readpassword("please enter a password"));
  }