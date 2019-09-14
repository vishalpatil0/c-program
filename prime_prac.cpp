#include<iostream>
using namespace std;
int main()
{
	int n,f,i;
	cout<<"Enter the value for number";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(i%n==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		cout<<"It is prime number";
	}
	else
	{
		cout<<"it is not prime number"<<endl;
	}
}

