#include<iostream>
using namespace std;
int main()
{
	int i,n,c,f=0,s=1,next;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		else
		{
			next=f+s;
			f=s;
			s=next;
		}
		cout<<next<<endl;
	}
	return 0;
}
