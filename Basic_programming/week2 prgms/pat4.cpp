/*  *
  ***
 *****
*******
 *****
  ***
   *

*/
#include <iostream> 
using namespace std; 
int main() 
{      int n;  
       cout<<"Enter the n"<<endl;
         cin>>n;  
	int space = n - 1; 

	
	for (int i = 0; i < n; i++) 
	{ 
		// loop for initially space, 
		// before star printing 
		for (int j = 0;j < space; j++) 
			cout << " "; 

		 
		for (int j = 0; j <= i; j++) 
			cout << "* "; 

		cout << endl; 
		space--; 
	} 

	 
	space = 0; 

	
	for (int i = n; i > 0; i--) 
	{ 
		// loop for initially space, 
		// before star printing 
		for (int j = 0; j < space; j++) 
			cout << " "; 

		// Print i stars 
		for (int j = 0;j < i;j++) 
			cout << "* "; 

		cout << endl; 
		space++; 
	}  
	return 0; 
} 
