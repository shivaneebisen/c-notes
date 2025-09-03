#include<iostream>
using namespace std;
int main()
{
    int unit;
    cout<<"enter unit";
    cin>>unit;
    if(unit>0 && unit<100)
    {
        cout<<unit*10;
    }
    else if(unit>100 && unit<200)
    {
        cout<<100*10+(unit-100)*20;
    }
    else if(unit>200 && unit<300)
    {
        cout<<100*10+100*20 +(unit-200)*30;
    }
    else if(unit>300)
    {
        cout<<100*10+100*20 +100*30+(unit-300)*40;
    }
}

