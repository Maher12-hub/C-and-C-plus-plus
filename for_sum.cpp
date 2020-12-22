#include<iostream>
using namespace std;
int main(){
    int n;
    long sum=0;
    cout<<"enter a positive integer:"<<endl;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        sum+=i;
    }
    for (int i=(n/2+1);i<=n;i++){
        sum+=i;
    }
    cout<<"sum="<<sum;
}