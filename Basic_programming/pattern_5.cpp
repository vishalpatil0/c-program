#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int n=5;
	int px=n;
	int py=n;
	int i,j;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n*2;j++)
		{
			if(j>=px && j<=py)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		px--;
		py++;
		cout<<endl;
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 3;
}
