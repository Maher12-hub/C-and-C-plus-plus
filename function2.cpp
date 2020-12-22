#include<iostream>
using namespace std;

int multiply_numbers(int c,int d){

return c*d;
}


int main(){
    int a,b;
    while(true){

        cout<<"enter two positive integer(or 0 to quit)"<<endl;
        cin>>a>>b;
        if(a==0) exit(0);
        cout<<"multiply is="<<multiply_numbers(a,b)<<endl;
    }


}
