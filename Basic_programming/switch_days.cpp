#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter 1 to 7 respectively for days"<<endl;
	int n;
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"monday"<<endl;
			break;
		case 2:
			cout<<"tuesday"<<endl;
			break;
		case 3:
			cout<<"wednesday"<<endl;
			break;
		case 4:
			cout<<"thursday"<<endl;
			break;
		case 5:
			cout<<"friday"<<endl;
			break;
		case 6:
			cout<<"saturday"<<endl;
			break;
		case 7:
			cout<<"sunday"<<endl;
			break;
		default:
			cout<<"invalid entry"<<endl;
	}
	return 1;
}
				
			
			
			
				
