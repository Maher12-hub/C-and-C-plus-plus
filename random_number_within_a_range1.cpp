#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    unsigned seed=time(0);
    cout<<"seed="<<seed<<endl;
    srand(seed);
    int max,min;
    cout<<"enter maximum and minimum number:"<<endl;
    cin>>min>>max;
    int range=max-min+1;
    for(int i=1;i<=10;i++){
        int r=rand()/100%range+min;
        cout<<r<<endl;
    }





}

