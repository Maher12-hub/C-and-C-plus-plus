#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two positive integer:\n";
    cin>>a>>b;
    if (b!=0 && a%b==0) cout<<a<<" divides by "<<b<<endl;
    else cout<<a<<" is not divided by "<<b<<endl;
    
}