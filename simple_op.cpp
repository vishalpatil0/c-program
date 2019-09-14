#include<iostream>
using namespace std;
class test
{
	private:
		int x;
	public:
		void doget(int a);		
};
void test::doget(int a)
{
	x=a;
	cout<<x;
}
int main()
{
	test t;
	t.doget(4);
	return 0;
}
