
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter numbers"<<endl;
	cin>>a>>b;
	cout<<"Number before swap are a="<<a<<"b="<<b<<endl;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"Number After swap are a="<<a<<"b="<<b<<endl;
	return 1;
}
/*
Explanation



i = 65; binary equivalent of 6

5 is 0100 0001

k = 120; binary equivalent of 120 is 0111 1000

i = i^k;

i...0100 0001

k...0111 1000

---------
val of i = 0011 1001
---------

k = i^k

i...0011 1001

k...0111 1000

---------
val of k = 0100 0001 binary equivalent of this is 65
---------

(that is the initial value of i)

i = i^k

i...0011 1001

k...0100 0001

---------
val of i = 0111 1000 binary equivalent of this is 120
---------

(that is the initial value of k) 
*/
