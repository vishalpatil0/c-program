#include<iostream>
using namespace std;
int main()
{
	int arr[100],pos,n,i,j,c;
	cout<<"Enter the limit of array\n";
	cin>>n;
	cout<<"Enter the element of array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<(n-1);i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[pos]>arr[j])
			{
				pos=j;
			}
		}
		if(pos!=i)
		{
			c=arr[i];
			arr[i]=arr[pos];
			arr[pos]=c;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
