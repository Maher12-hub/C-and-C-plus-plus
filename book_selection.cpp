#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cout<<"enter two positive integers"<<endl;
    cin>>n>>d;
    if (n%d){
        cout<<"n is not divided by d"<<endl;
    }
    else
    {
        cout<<"the result is:"<<n/d<<endl;
    }
    
}