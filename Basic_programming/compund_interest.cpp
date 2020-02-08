/*A= amount
  P=principal
  r=interest rate(decimal)
  n=number of times interest is compunded per unit 't'
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float principal,rate,time,CI;
	cout<<"Enter principal"<<endl;
	cin>>principal;
	cout<<"Enter interest rete (decimal)"<<endl;
	cin>>rate;
	cout<<"Enter the time"<<endl;
	cin>>time;
	CI=principal*(pow((1 + rate / 100), time));
	cout<<"Compound interest is ="<<CI<<endl;
	return 1;
}
