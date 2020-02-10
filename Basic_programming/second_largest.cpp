#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout<<"Enter 3 numbers:\n"<<endl;
    cin>>a>>b>>c;
    if(a >= b && a >= c)
    {
        if(b >= c)
        {
            cout<<b<<" is the 2nd largest number\n"<<endl;
        }
        else
        {
           cout<<c<<" is the 2nd largest number\n";
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            cout<<a<<"is the 2nd largest number\n";
        }
        else
        {
            cout<<c<<" is the 2nd largest number\n";
        }
    }

    else if(a >= b)
    {
        cout<<a<<" is the 2nd largest number\n";
    }
    else
    {
      cout<<b<<" is the 2nd largest number\n";
    }   return 0;
}
