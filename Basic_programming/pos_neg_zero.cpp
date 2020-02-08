#include<iostream>
using namespace std;
int main()
{	
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(n==0)
	{
		cout<<"it is zero"<<endl;
	}
	else if(n>0)
	{
		cout<<"it is positive"<<endl;
	}
	else
	{
		cout<<"it is negative"<<endl;
	}
	return 1;
}
