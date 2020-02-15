#include <iostream>

using namespace std;

int main()

{

int n,sum=0;

cin>>n;

sum = n%10 + (n/10)%10 + (n/100);

cout<<sum<<endl;

return 0;

} 	
