#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,s,area;
	cout<<"Enter the side of triangle "<<endl;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	a=s-a;
	b=s-b;
	c=s-c;
	s=s*a*b*c;
	area=sqrt(s);
	cout<<"Area of triangle is = "<<area<<endl;
	return 1;
}
