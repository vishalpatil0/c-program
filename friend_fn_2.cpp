#include<iostream>
using namespace std;

class vol;
class cube
{
	public:
		int x;
		void set()
		{
			x=10;
		}
		friend void max(cube,vol);
};
class vol
{
	public:
		int y;
		void set()
		{
			y=20;
		}
		friend void max(cube,vol);
};
void max(cube c, vol v)
{
	if(c.x>v.y)
	{
		cout<<"c.x";
	}
	else
	{
		cout<<"c.y";
	}
}		
int main()
{
	cube c;
	vol v;
	c.set();
	v.set();
	max(c,v);
	return 0;
}
	
	
