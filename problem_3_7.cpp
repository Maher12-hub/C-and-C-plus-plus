#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two positive integers:";
    cin>>a>>b;
    if (a%b==0 || b%a==0) cout<<"multiple"<<endl;
    else cout<<"not"<<endl;
}