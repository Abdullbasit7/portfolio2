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

 
  string generateword(enchartype chartype,short length)
  {
      string word;
    for (int i = 1; i <=length; i++)
    {
     
        word = word + getrandomcharacter( chartype );
      
    }
    return word;
  }

  string generatekey() {
       
      string key = "";
      key=generateword(enchartype::capitaletter,4)+"-";
      key = key + generateword(enchartype::capitaletter, 4) + "-";
      key = key + generateword(enchartype::capitaletter, 4) + "-";
      key = key + generateword(enchartype::capitaletter, 4) ;

      return key;
  }

 void generatekeys(short NumberOfKeys){
    
     for (int i = 1; i <= NumberOfKeys; i++) {

             cout << "Key [" << i << "] : ";
             cout << generatekey() << endl;

     }
 
 
     }

int main()
{
      srand((unsigned)time(NULL));

        generatekeys(readpositivenumber("please enter the main number?"));
                         

}
