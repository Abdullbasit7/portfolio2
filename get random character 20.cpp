#include <iostream>
#include <cstdlib>

using namespace std;

int randomnumber(int from, int to) {

    int rannum = rand() % (to - from + 1) + from;
    return rannum;
}

enum enchartype { smallletter = 1,capitaletter=2,specialcharacter=3,digit=4 };

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

int main()
{
    srand((unsigned)time(NULL));

    cout << getrandomcharacter(enchartype::smallletter)<< endl;
    cout << getrandomcharacter(enchartype::capitaletter )<< endl;
    cout << getrandomcharacter(enchartype::specialcharacter) << endl;
    cout << getrandomcharacter(enchartype::digit) << endl;
                                      

     }
