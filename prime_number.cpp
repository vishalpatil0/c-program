#include<iostream>
using namespace std;
int main()
{
	int flag,n,i;
	cout<<"Enter the number to check it is prime number or not"<<endl;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"It is prime number"<<endl;
	}
	else
	{
		cout<<"It is not prime number"<<endl;
	}
	return 0;
}
