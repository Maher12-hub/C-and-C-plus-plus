#include<iostream>
using namespace std;
int main(){
    int sum=1;
    int i=1;
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    while(i<=n){
        sum*=i;
        i++;
    }
    cout<<n<<"!="<<sum<<endl;
}