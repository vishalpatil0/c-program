#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Please Enter an alphabet: \n";
    cin>>ch;
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')  {
		cout<<ch<<"is a VOWEL."<<endl;
	}
    else {
    	cout<<ch<<"is a constant"<<endl;
	}
    return 0;
}
