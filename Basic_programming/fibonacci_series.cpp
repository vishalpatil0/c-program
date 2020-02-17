#include<iostream>
using namespace std;
int main()
{
	int sum=0,first=0,second=1,next=0,n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		cout<<next<<endl;
	}
	return 2;
}
