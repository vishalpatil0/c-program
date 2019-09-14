#include<iostream>
using namespace std;
int n;
int fact(int n);
int main()
{
	cout<<"Enter the number ";
	cin>>n;
	cout<<"The factorial is="<<fact(n)<<endl;
	return 0;
}
int fact(int n)
{
	if((n==0)||(n==1))
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
