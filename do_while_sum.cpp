#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"enter a positive integer:"<<endl;
    cin>>n;
    long sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    cout<<"sum="<<sum;
}