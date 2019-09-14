#include<iostream>
using namespace std;
class test
{
	public: int x,y,z;
	void getdata(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;	
	}
	void operator-();
	void display()
	{
		cout<<x<<"\t"<<y<<"\t"<<z;
	}
};
void test::operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
int main()
{
	test t;
	t.getdata(10,-20,30);
	t.display();
	-t;
	t.display();
	return 0;
}
