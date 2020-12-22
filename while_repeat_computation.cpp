#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x;
    cout<<"enter a positive integer:"<<endl;
    cin>>x;
    while (x>0){
        cout<<"sqrt of "<<x<<" is "<<sqrt(x)<<endl;
        cout<<"enter a positive integer or (0 to quit)"<<endl;
        cin>>x;
    }
}