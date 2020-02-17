#include<iostream>
#define max 100
using namespace std;
int main()
{
	int sum=0,n,arr[max];
	cout<<"Enter the number count (must be greater than 10)"<<endl;
	cin>>n;
	cout<<"Enter the "<<n<<" numbers in array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Calculating sum of first 10 numbers"<<endl;
	for(int i=0;i<10;i++)
	{
		sum+=arr[i];
	}
	cout<<"Sum of first ten number is = "<<sum<<endl;
	return 2;
}
