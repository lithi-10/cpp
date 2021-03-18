#include "maxmin.h"
#include <iostream>
using namespace std;
maxmin::maxmin()
{
   cout<<"Enter two integer ";
}
void maxmin :: mm()
{
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if(a<b){
        cout<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<"Both are equal"<<endl;
    }
}
void maxmin :: display()
{
    cout<<"Program work Properly"<<endl;
}
