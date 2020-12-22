#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cout<<"enter two positive integers:"<<endl;
    cin>>n>>d;
    if (d!=0 && n%d==0){
        cout<<"n is divided by d"<<endl;
    }
}