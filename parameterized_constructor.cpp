#include<iostream>
using namespace std;
class cube
{
	private:
		int x,y;
	public:
		cube(int x1,int y1)
		{
			x=x1;
			y=y1;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
};
int main()
{
	cube c(10,20);
	cout<<"c.x1="<<c.getx()<<endl;
	cout<<"c.y1="<<c.gety()<<endl;
	return 0;
}
