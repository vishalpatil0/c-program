#include<iostream>
using namespace std;
int main()
{
	int n,i,c=1;
	cout<<"Enter the number "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c=c*i;
	}
	cout<<c<<endl;
	return 0;
}
