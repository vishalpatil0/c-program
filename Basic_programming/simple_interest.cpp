/*principal = amount of money that borrowwed
  r=interest rate per year
  t=time in years
*/
#include<iostream>
using namespace std;
int main()
{
	float p,r,t,I;
	cout<<"Enter the principal (Staring amount of money)"<<endl;
	cin>>p;
	cout<<"Enter the interest rate per year"<<endl;
	cin>>r;
	cout<<"Enter the time period in years"<<endl;
	cin>>t;
	I=(p*r*t)/100;
	cout<<"Simple interest is = "<<I<<endl;
	return 1;
}
