#include<iostream>
using namespace std;
int main()
{
    int n1=12;
    int n2=13;
    

    int hcf=0;

    for(int i=1;i<=n1;++i)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    cout<<hcf;
}
