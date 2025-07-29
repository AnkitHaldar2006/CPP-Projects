#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str1;
    string str2;

    cout<<"Enter some words: ";
    getline(cin,str1);

    cout<<"Enter the word you find: ";
    getline(cin,str2);

    int  firstPos = str1.find(str2);
    int lastPos = str1.rfind(str2);

    if (firstPos != string::npos) 
    {
        cout << "First occurrence of \"" << str2 << "\" at index: " << firstPos << endl;
        cout << "Last occurrence of \"" << str2 << "\" at index: " << lastPos << endl;
    } 
    else 
    {
        cout << "\"" << str2 << "\" not found in the sentence." << endl;
    }

}
