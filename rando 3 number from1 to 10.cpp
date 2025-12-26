#include <iostream>
#include <cstdlib>

using namespace std;

int randomnumber(int from, int to) {

    int rannum = rand() % (to - from + 1) + from;
    return rannum;
      }

int main()
{
    srand((unsigned)time(NULL));

    cout << randomnumber(1,10)<< endl;
    cout << randomnumber(1,10) << endl;
    cout << randomnumber(1,10)<< endl;

   
}
