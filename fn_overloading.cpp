#include<iostream>
using namespace std;
int add(int n);
int add(int n,int m);
float add(float n,float m);
int main()
{
	cout<<"calling int add(int n)="<<add(4)<<endl;
	cout<<"calling int add(int n,int m)="<<add(4,3)<<endl;
	cout<<"calling float add(float n,float m)="<<add(3.4f,5.7f)<<endl;
	return 0;
}
int add(int n)
{
	return (n*n);
}
int add(int n,int m)
{
	return (n+m);
}
float add(float n,float m)
{
	return (n/m);
}	
	
	
