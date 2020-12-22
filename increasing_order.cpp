#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter two positive integers:\n";
    cin>>x>>y;
    if (x>y){int temp=x;x=y;y=temp;}
        cout<<x<<"<="<<y<<endl;
    
    
    
}