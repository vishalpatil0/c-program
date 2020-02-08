#include<iostream>
using namespace std;
int main()
{
	float a,b,res;
	int p,q,qout;
	while(true)
	{
	cout<<"1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-Exit\n\n Enter your choice"<<endl;
	int ch;
	cin>>ch;
	cout<<"Enter the number"<<endl;
	cin>>a>>b;
	switch(ch)
	{
		case 1:
			res=a+b;
			cout<<"Addition is "<<res<<endl;
			break;
		case 2:
			res=a-b;
			cout<<"Subtraction is = "<<res<<endl;
			break;
		case 3:
			res=a*b;
			cout<<"Multiplication is = "<<res<<endl;
			break;
		case 4:
			res=a/b;
			p=int(a);
			q=int(b);
			qout=p%q;
			cout<<"Division is = "<<res<<"Qoutient is ="<<qout<<endl;
			break;
		case 5:
			exit(0);
			break
		default:
			cout<<"Invalid choice"<<endl;
	}
	}
	return 1;
}
