#include<iostream>
using namespace std;
int main()
{
	int n,f,i;
	cout<<"enter the number"<<endl;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
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
		cout<<"it is not prime  number";
	}
	return 0;
}
