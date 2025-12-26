#include <iostream>
#include <cstdlib>

using namespace std;

enum enchartype { smallletter = 1, capitaletter = 2, specialcharacter = 3, digit = 4 };


int randomnumber(int from, int to) {

    int rannum = rand() % (to - from + 1) + from;
    return rannum;
}

char getrandomcharacter(enchartype chartype) {

    switch (chartype)
    {
    case enchartype::smallletter:
    { return  char(randomnumber(97, 122));
    break; }
    case enchartype::capitaletter:
    {return char(randomnumber(65, 90));
    break; }
    case enchartype::specialcharacter:
    { return char(randomnumber(33, 47));
    break; }
    case enchartype::digit:
    { return char(randomnumber(48, 57));
    break; }
    default:
        break;
    }



}

int readpositivenumber(string message) {
    int number;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}


string generateword(enchartype chartype, short length)
{
    string word;
    for (int i = 0; i < length; i++)
    {

        word = word + getrandomcharacter(chartype);

    }
    return word;
}

string generatekey() {

    string key = "";
    key = generateword(enchartype::capitaletter, 4) + "-";
    key = key + generateword(enchartype::capitaletter, 4) + "-";
    key = key + generateword(enchartype::capitaletter, 4) + "-";
    key = key + generateword(enchartype::capitaletter, 4);

    return key;
}

void FillArrayWithKeys(string arr[100],int arrlength) {

    for (int i = 0; i < arrlength; i++) {

        arr[i] = generatekey() ;

    }


}
void PrintStringArray(string arr[100], int arrlength) {


    cout << "\nArray elements:\n\n";
    for (int i = 0; i < arrlength; i++) {
        cout << "Array[" << i+1 << "] : ";
        cout << arr[i] << "\n";
    }
    cout << "\n";
}


int main()
{
    srand((unsigned)time(NULL));

    int  arrlength;
    string arr[100];

    arrlength= readpositivenumber("How many keys do you want to generate?\n");

    FillArrayWithKeys(arr,arrlength);

    PrintStringArray(arr, arrlength);
}
