#include<iostream>
using namespace std;
int fact(int n);
int main()
{
	int n,i,c;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<"Factorial of "<<n<<"is"<<fact(n)<<endl;
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
