#include<iostream>
#include<math.h>
#define max 5
#define size 100
using namespace std;
struct student
{
	int roll;
	string name;
};
int main()
{
	student std[size];
	int std_strength;
	cout<<"Enter the student strength"<<endl;
	cin>>std_strength;
	cout<<"========================================================"<<endl;
	cout<<"Enter the student roll number and name respectively"<<endl;
	for(int i=0;i<std_strength;i++)
	{
		cout<<"Enter the "<<i+1<<" student roll number"<<endl;
		cin>>std[i].roll;
		cout<<"Enter the "<<i+1<<" student name"<<endl;
		cin>>std[i].name;
	}
	for(int i=0;i<std_strength;i++)
	{
		cout<<"Enter "<<i+1<<" student's registered subjects and their marks"<<endl;
	int sub_marks[max];
	string sub_name[max];
	cout<<"Enter 5 subjects name"<<endl;	
	cout<<"========================================================="<<endl;
	for(int i=0;i<max;i++)
	{
		cout<<"Enter "<<i+1<<" subject"<<endl;
		cin>>sub_name[i];
	}
	cout<<"========================================================="<<endl;
	cout<<"Now enter the subject marks out of 100 respectively"<<endl;
	for(int i=0;i<max;i++)
	{
		cout<<"Enter the marks for "<<sub_name[i]<<endl;
		cin>>sub_marks[i];
	}
	int sum=0;
	for(int i=0;i<max;i++)
	{
		sum+=sub_marks[i];
	}
	int per=(sum*100)/500;
	cout<<"============================================================"<<endl<<endl;
	cout<<endl<<"percentage = "<<per<<endl;
	if(per>=80)
	{
		cout<<"A grade"<<endl;
	}
	else if(per>=60)
	{
		cout<<"B grade"<<endl;
	}
	else if(per>=40)
	{
		cout<<"c grade"<<endl;
	}
	else
	{
		cout<<"Failed"<<endl;
	}
	}
	return 8;
}
