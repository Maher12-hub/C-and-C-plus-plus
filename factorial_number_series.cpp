#include<iostream>
using namespace std;
int main(){
    long bound,sum=1;
    int i=1;
    cout<<"enter a positive integer:"<<endl;
    cin>>bound;
    cout<<"factorial numbers<"<<bound<<":\n1";
    do{
        sum *= i;
        i++;
        cout<<","<<sum;

    }while(sum<bound);
}