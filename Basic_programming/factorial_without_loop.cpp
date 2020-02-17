#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(int i=n;i>0;i--)
	{
		fact=fact*i;
	}
	cout<<"Factorial is ="<<fact<<endl;
	return 3;
}
