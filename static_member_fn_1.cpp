#include<iostream>
using namespace std;
static int count;
class item
{
	public:
		int a;
		void getcount(int a)
		{
			a=a;
			count++;
		}
		void show()
		{
			cout<<count<<endl;
		}
};
//int item::count;
int main()
{
	item a,b,c;
	a.show();
	b.show();
	c.show();
	a.getcount(2);
	b.getcount(3);
	c.getcount(4);
	a.show();
	b.show();
	c.show();
	return 0;
}
