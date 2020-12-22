#include<iostream>
using namespace std;
int main(){
    int n,max;
    cout<<"enter a positive integer(0 to quit):"<<endl;
    cin>>n;
    max=n;
    while(n>0){
        if(n>max) max=n;
        cin>>n;
    }
    cout<<"max="<<max<<endl;
}