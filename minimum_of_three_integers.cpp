#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three positive integers:"<<endl;
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<"a is smaller"<<endl;
    }
    if (b<a && b<c){
        cout<<"b is smaller"<<endl;
    }
    if (c<a && c<b){
        cout<<"c is smaller"<<endl;
    }
}