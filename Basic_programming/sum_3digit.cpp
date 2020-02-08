#include<iostream>
using namespace std;
int main()
{
	int sum,n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n=n/10;
	}
	cout<<"sum of all digit of given number is = "<<sum<<endl;
	return 1;
}
