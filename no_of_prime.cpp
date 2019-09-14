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
			cout<<i<<endl;
		}
	}
}

