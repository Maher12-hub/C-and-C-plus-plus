#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three positive integers:\n";
    cin>>a>>b>>c;
    if (a<b){
        if (a<c) cout<<"a is minimum"<<endl;
        else cout<<"c is minimum"<<endl;

    }
    else cout<<"b is minimum"<<endl;

}