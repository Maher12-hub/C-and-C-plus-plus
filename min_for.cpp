#include<iostream>
using namespace std;
int main(){
int n,min;
cout<<"enter a positive integer(0 to quit)12:\n"<<endl;
cin>>n;
for(min=n;n>0;){
    if (n<min) min=n;
    cin>>n;
}
cout<<"min="<<min<<endl;


}
