#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the percentage"<<endl;
	int per;
	cin>>per;
	if(per>=90)
	{
		cout<<"A"<<endl;
	}
	else if(per>=80)
	{
		cout<<"B"<<endl;
	}
	else if(per>=60)
	{
		cout<<"c"<<endl;
	}
	else if(per>=40)
	{
		cout<<"D"<<endl;
	}
	else
	{
		cout<<"Failed"<<endl;
	}
	return 2;
}
