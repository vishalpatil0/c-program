#include<iostream>
using namespace std;
class cube
{
	private:
		int a,b;
	public:
		void set()
		{	
			a=2;
			b=3;
		}
		friend int mean(cube c)
		{
			return float((c.a+c.b)/2.0);
		}
};
int main()
{
	cube x;
	x.set();
	cout<<"Mean is ="<<mean(x)<<endl;
	return 0;
}
