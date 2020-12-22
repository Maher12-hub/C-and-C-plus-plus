#include<iostream>
using namespace std;
int main(){
    int n;

while(true){
    cout<<"enter int:";
    cin>>n;
    if(n%2==0) break;
    if(n%3==0) continue;
    cout<<"inner loop"<<endl;
}
cout<<"outside of the loop"<<endl;

}
