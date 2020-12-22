#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    double x1,x2;
    cout<<"enter the values of coefficient a,b,c"<<endl;
    cin>>a>>b>>c;
    if (a==0) {
        cout<<"this is not a quadratic equation"<<endl;
        return 0;
    }
    double d=b*b-4*a*c;
    if (d<0){
        cout<<"this equation has no real solution:d<0"<<endl;
        return 0;
    }
     double sd=sqrt(d);
    x1=(-b+sd)/(2*a);
    x2=(-b-sd)/(2*a);
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
    cout<<"a*x1*x1+b*x1+c="<<a*x1*x1+b*x1+c<<endl;
    cout<<"a*x2*x2+b*x2+c="<<a*x2*x2+b*x2+c<<endl;

    

}