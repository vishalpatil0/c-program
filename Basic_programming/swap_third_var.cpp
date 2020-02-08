#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the numbers "<<endl;
	cin>>a>>b;
	cout<<"Number before swap a="<<a<<"b="<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"Number after swap a="<<a<<"b="<<b<<endl;
	return 0;
}
