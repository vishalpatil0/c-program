#include<iostream>
using namespace std;
int c;
class cube
{
		int a,b;
	public:
		void get(int a,int b);
		void put();
};
void cube::get(int a,int b)
{
	c=a+b;
}
void cube::put()
{
	cout<<c<<endl;
}
int main()
{
	cube c;
	c.get(2,3);
	c.put();
	return 0;
}
	
