#include<iostream>
using namespace std;
int main()
{
	int flag=0;
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	if(n==1)
	{
		cout<<"Number nor prime or composite"<<endl;
	}
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		cout<<"Number is not prime"<<endl;
	}
	else
	{
		cout<<"NUmber is prime"<<endl;
	}
	return 2;
}
