#include<iostream>
using namespace std;
int main(){
long mul=1;
int n;
while(true){
    cout<<"enter a positive integer:"<<endl;
    cin>>n;
    if (n<0) goto anik;
    mul*=n;
}
anik:
    cout<<"mult="<<mul;



}
