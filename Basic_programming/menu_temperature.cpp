#include<iostream>
using namespace std;
int main()
{
	int fahrenheit,celsius;
	cout<<"1-Fahrenheit to celsius\n2-Celsius to Fahrenheit\n3-exit\nEnter your choice"<<endl;
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Enter temperature in fahrenheit"<<endl;
			cin>>fahrenheit;
			celsius=(fahrenheit-32)*5/9;
			cout<<"Temperature in celsius is ="<<celsius<<endl;
			break;
		case 2:
			cout<<"Enter temperature in Celsius"<<endl;
			cin>>celsius;
			fahrenheit=(celsius*9/5)+32;
			cout<<"Temperature in fahreheit is ="<<fahrenheit<<endl;
			break;
		case 3:
			exit(0);
		default:
			cout<<"Invaid choice"<<endl;
	}
	return 1;
}
