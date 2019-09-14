#include<iostream>
using namespace std;
class XYZ;
class ABC 
{
	public:
		int x;
		void doget(int a)
		{
			x=a;
		}
		friend void docopy(ABC,XYZ);
};
class XYZ
{
	public:
		int y;
		void doget(int b)
		{
			y=b;
		}
		friend void docopy(ABC,XYZ);
};
void docopy(ABC a,XYZ x)
{
	if(a.x>x.y)
	{
		cout<<"hello";
	}
	else
	{
		cout<<"exit";
	}
}
int main()
{
	ABC abc;
	XYZ xyz;
	abc.doget(3);
	xyz.doget(5);
	docopy(abc,xyz);
	return 0;
}
