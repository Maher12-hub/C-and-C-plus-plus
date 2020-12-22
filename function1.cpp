#include<iostream>
using namespace std;


void add_numbers(int c,int d){
cout<<"the add is:"<<c+d<<endl;
}


int main(){

for(int i=1;i<=10;i++){
    int a,b;
    cout<<"enter two positive number:"<<endl;
    cin>>a>>b;
    add_numbers(a,b);

}

}
