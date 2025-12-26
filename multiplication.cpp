#include <iostream>
using namespace std;

void printtableheader() {

	cout << "\n\n\t\t\t multiplacation table from 1 to 10 \n ";
	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}      cout << "\n__________________________________________________________________________________\n";
}

string colonsperator(int i ) {
	if (i < 10)
		return " |";
	else
		return "|";
}


void printmultiplacationtable() {

	printtableheader();
	for (int i = 1; i <= 10; i++)
	{
		cout << "" << i << colonsperator(i)<<"\t";
		for (int j = 1; j <= 10; j++)
		{
			cout  << i*j << "\t";
		}
		cout << "\n";
	}



}



int main()
{
	printmultiplacationtable();


}
