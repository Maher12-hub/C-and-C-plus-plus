#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    long c;
    int n;
    cout<<"enter an integer:"<<endl;
    cin>>n;
    int i=0;
    while(i<n){
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    cout<<c<<endl;
}