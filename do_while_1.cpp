#include<iostream>
using namespace std;
int main(){
    int i=1;
    do{
        int n;
        int d;
        cout<<"enter two positive integer"<<endl;
        cin>>n>>d;
        if(n%d==0) cout<<"n is divisible by d"<<endl;
        else cout<<"n is not divisible by d"<<endl;


    }while(i<=10);
}