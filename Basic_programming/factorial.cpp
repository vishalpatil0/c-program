#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1 || n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<"Factorial is ="<<fact(n)<<endl;
	return 2;
}
