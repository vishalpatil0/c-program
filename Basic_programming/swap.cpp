#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the nubmers "<<endl;
	cin>>a>>b;
	cout<<"Numbers before swap are a="<<a<<"b="<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"Numbers after swap are a="<<a<<"b="<<b<<endl;
	return 0;
}
