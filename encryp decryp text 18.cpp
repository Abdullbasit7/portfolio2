#include <iostream>
#include <string>
using namespace std;

string readtext() {
    string text;
    cout << "please enter name?\n";
        getline(cin, text);
    return text;
         } 
     
string encryptext(string text, short encryptionkey) {
    for (int  i = 0; i < text.length(); i++)
    {
        text[i] = char((int)text[i] + encryptionkey);
    }
    return text;
          }
string decryptext(string text, short encryptionkey) {

    for (int i = 0; i < text.length(); i++)
    {
        text[i] = char((int)text[i] - encryptionkey);
    }
    return text;


       }

 

int main()
{    
    const short encryptionkey = 2;
    string text = readtext();
    string textafterencryption = encryptext(text, encryptionkey);
    string textafterdecryption = decryptext(textafterencryption, encryptionkey);
    cout << "\ntext before encryption : " << text << endl;
    cout << "text after encryption : " << textafterencryption << endl;
    cout << "text after decryption : " << textafterdecryption << endl;


}
       




