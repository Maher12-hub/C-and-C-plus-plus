#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three positive integers"<<endl;
    cin>>a>>b>>c;
    int min=a;
    if (b<min) min=b;
    if (c<min) min=c;
    cout<<"the minimum of three positive integer is:"<<min<<endl;
}