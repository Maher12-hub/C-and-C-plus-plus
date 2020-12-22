//This program implements the quadratic formula to solve quadratic equations.
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"\t a="<<endl;
    cin>>a;
    cout<<"\t b="<<endl;
    cin>>b;
    cout<<"\t c="<<endl;
    cin>>c;
    cout<<"the equation is:"<<a<<"*x*x+"<<b<<"*x+"<<c<<endl;
    cout<<"the solutions are:\n";
    float d=(b*b)-(4*a*c);
    float sqrtd=sqrt(d);
    float x1=(-b + sqrtd)/(2*a);
    float x2=(-b - sqrtd)/(2*a);
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
    cout<<"check\n";
    cout<<"\t a*x1*x1+b*x1+c="<<a*x1*x1+b*x1+c<<endl;
    cout<<"\t a*x2*x2+b*x2+c="<<a*x2*x2+b*x2+c<<endl;


}