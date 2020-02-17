#include<iostream>
using namespace std;
class menu
{
	public:
		void fact(int);
		void prime(int);
		void odd_even(int);
};
void menu::fact(int n)
{
	int fact=1;
	for(int i=n;i>0;i--)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<n<<" is ="<<fact<<endl;
}
void menu::prime(int n)
{
	int flag=0;
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	
	}
	if(flag==1)
	{
		cout<<"Number is not prime"<<endl;
	}
	else
	{
		cout<<"Number is prime"<<endl;
	}
}
void menu::odd_even(int n)
{
	if(n%2==0)
	{
		cout<<"Number is even"<<endl;
	}
	else
	{
		cout<<"Number is odd"<<endl;
	}
}
int main()
{
	menu m;
	while(true)
	{
	cout<<"\n\n===============================================================\n\n1-Factorial of number\n2-prime number\n3-odd or even\n4-Exit\n\nEnter your choice"<<endl;
	int ch,n;
	cin>>ch;
	switch(ch)
	{
		case 1: 
			cout<<"Enter the number here"<<endl;
			cin>>n;
			m.fact(n);
			break;
		case 2: 
			cout<<"Enter the number here"<<endl;
			cin>>n;
			m.prime(n);
			break;
		case 3: 
			cout<<"Enter the number here"<<endl;
			cin>>n;
			m.odd_even(n);
			break;	
		case 4:
			exit(0);
				
		default:
			cout<<"Invalid choice"<<endl;
	}
	}
	return 2;
}
			
