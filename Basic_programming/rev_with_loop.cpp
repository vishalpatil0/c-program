#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the number"<<endl;
	int n,r=0;
	cin>>n;
	while(n!=0)
	{
		r=r*10;
		r=r+(n%10);
		n=n/10;
	}
	cout<<"Reverse is ="<<r<<endl;
	return 2;
}
