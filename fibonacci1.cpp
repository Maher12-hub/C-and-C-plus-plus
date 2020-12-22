#include<iostream>
using namespace std;
int main(){
    int a=0,b=1;
    long bound,c;
    cout<<"enter a positive integer:"<<endl;
    cin>>bound;
    cout<<"fibonacci numbers<"<<bound<<"\n0,1";
    while (true)
    {
        c=a+b;
        if (c>bound) exit(0);
        cout<<","<<c;
        a=b;
        b=c;

    }
    
}