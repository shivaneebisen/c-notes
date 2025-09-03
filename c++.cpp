#include <iostream>
using namespace std;
int main() 
{
    int option;
    cout<<"enter your option";
    cin>>option;
    if(option==1)
    {
        int breadth;
        int height;
        cout<<"enter breadth and height";
        cin>>breadth>>height;
        cout<<"area of triangle ="<<0*breadth*height;
    }
    else if(option==2)
    {
        int side;
        cout<<"enter side";
        cin>>side;
        cout<<"area of square ="<<side*side;
        return 0;
    }


    
}