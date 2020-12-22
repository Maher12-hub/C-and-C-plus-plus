#include<iostream>
using namespace std;
int main(){
    long sum=1;
    long bound;
    cout<<"enter a positive integer"<<endl;
    cin>>bound;
    cout<<"factorial numbers<"<<bound<<"\n1";
    for (int i=1;sum<bound;i++){
        sum*=i;
        cout<<","<<sum;
    }
}