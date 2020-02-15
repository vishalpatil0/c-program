#include<iostream>
using namespace std;
int main()
{	// print 10 to 1
	for(int i=10;i;i--)
	{
		cout<<i<<endl;
	}
	
	cout<<"---------------------"<<endl;
	//this is print infinite times 
	/*int i=1;
	for(i<4;int j=5;j=0)
	{
		cout<<i<<endl;
	}*/
	
	//the below following for loop  not get executed coz of the semicolon      only following for loop statement get executed [in loop] 
	for(int i=1;i<=10;cout<<i++<<endl);
	{
		
	}
	cout<<"---------------------------"<<endl;
	 int i=0;
	 //following loop scan the value while looping
	for(cin>>i;i<=10;i++)
	{
		cout<<i<<endl;
	}
	return 3;
}
