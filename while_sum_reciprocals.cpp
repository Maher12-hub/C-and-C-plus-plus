#include<iostream>
using namespace std;
int main(){
    int i=0;
    double sum=0;
    int bound;
    cout<<"enter a positive integer:"<<endl;
    cin>>bound;
    while(sum<bound){
        sum+=1.0/++i;
        
    }
    cout<<"the sum of the first "<<i<<" reciprocal is "<<sum;
}