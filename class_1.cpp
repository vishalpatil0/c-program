#include<iostream>
using namespace std;
class s
{
	char name[20];
	int age;
	public:
		void getdata();
		void putdata();
};
void s::getdata()
{
	cout<<"Enter the name"<<endl;
	cin>>name;
	cout<<"enter the age"<<endl;
	cin>>age;
}
void s::putdata()
{
	cout<<"Name is ="<<name<<"Age is "<<age<<endl;
	
}
int main()
{
	s s1;
	s1.getdata();
	s1.putdata();
	return 0;
}
