#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the temperature in celsius"<<endl;
	int celsius,fahrenheit;
	cin>>celsius;
	fahrenheit=(celsius * 9 / 5) + 32;
	cout<<"Temperature in fahrenheit is = "<<fahrenheit<<endl;
	return 1;
}
