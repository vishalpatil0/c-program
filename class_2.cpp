#include<iostream>
using namespace std;
class s
{
	char name[20];
	int age;
	public:
		void getdata(int a);
		void putdata();
};
void s::getdata(int a)
{
	cout<<"Enter the name"<<endl;
	cin>>name;
	age=a;
}
void s::putdata()
{
	cout<<"Name is ="<<name<<"Age is "<<age<<endl;
	
}
int main()
{
	int a;
	cout<<"enter the age"<<endl;
	cin>>a;
	s s1;
	s1.getdata(a);
	s1.putdata();
	return 0;
}
