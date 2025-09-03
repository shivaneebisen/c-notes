#include <iostream>
using namespace std;
int main() 
{
    char option;
    cout<<"enter option";
    cin>>option;
    if(option=='a')
    {
        int a=11;
        int b=12;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"value of a is=a"<<a;
cout<<endl;
cout<<"value of a is=b"<<b;

    }
    else if(option=='b')
    {
        int a=11;
        int b=22;
        int temp=a;
        a=b;
        b=temp; 
        cout<<"value of a is=a"<<a;
cout<<endl;
cout<<"value of a is=b"<<b;
    }

}