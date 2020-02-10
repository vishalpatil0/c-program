#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter grade A B C D F"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 'A':
				cout<<"Outstanding"<<endl;
				break;
		case 'B':
				cout<<"Excellent"<<endl;
				break;
		case 'c':
				cout<<"Good"<<endl;
				break;
		case 'D':
				cout<<"Average need to work hard"<<endl;
				break;
		case 'F':
				cout<<"Failed"<<endl;
				break;
		default:
				cout<<"Invalide choice"<<endl;
	}
	return 2;
}
		
		
		
