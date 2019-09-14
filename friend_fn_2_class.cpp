#include<iostream>
using namespace std;
class ABC
{
	int x;
	public:
		void set(int i)
		{
			x=i;
		}
		friend void max(ABC,XYZ);
};
class XYZ
{
	int a;
	public:
		void set(int i)
		{
			a=i;
		}
		friend void max(ABC,XYZ);
};
int main()
{
	ABC abc;
	XYZ xyz;
	abc.set(2);
	xyz.set(4);
	max(abc,xyz);
	return 0;
}
void max(ABC a,XYZ x)
{
	if(z.
