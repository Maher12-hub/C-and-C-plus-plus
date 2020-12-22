#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter four integers:"<<endl;
    cin>>a>>b>>c>>d;
    int min=a;
    if (b<min) min=b;
    if(c<min) min=c;
    if (d<min) min=d;
    cout<<"your minimum number is "<<min<<endl;
}