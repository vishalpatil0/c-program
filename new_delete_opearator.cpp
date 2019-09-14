#include<iostream>
using namespace std;
int main()
{
	int *arr;
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	cout<<"Creating an array of size"<<endl;
	arr=new int[size];
	cout<<"Dynamic memory allocation is successful"<<endl;
	delete arr;
	cout<<" member pointer is deleted"<<endl;
	return 0;
}
