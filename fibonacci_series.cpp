#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter the number of term"<<endl;
	cin>>n;
	int first=0,second=1,next;
	for(i=0;i<n;i++)
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
	return 0;
}
