#include<iostream>
using namespace std;
int main()
{
    int n1=9;
    int n2=7;
   int lcm=9;

    for(int i=n1;   ;i=i+n1)
    {
        if(i%n2==0 && i%n1==0)
        
        {
            cout<<i;
            break;
        }
    
    }
}