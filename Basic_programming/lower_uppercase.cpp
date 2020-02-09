#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
        char str[100];
        cout<<"Enter the string that you want to convert to uppercase and lowercase"<<endl;
        cin.ignore();
        cin.getline(str,100);
        cout << "The uppercase version of \"" << str << "\" is " << endl;
        for (int i=0; i<strlen(str); i++)
        {
            putchar(toupper(str[i]));
        }
        cout<<endl;
        cout << "The lowercase version of \"" << str << "\" is " << endl;
        for (int i=0; i<strlen(str); i++)
        {
            putchar(tolower(str[i]));
        }
        cout<<endl;
        return 0;
}
