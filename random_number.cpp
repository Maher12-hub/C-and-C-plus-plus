#include<iostream>
#include<cstdlib>
using namespace std;
int main(){

    unsigned seed;
    cout<<"enter seed:"<<endl;
    cin>>seed;
    srand(seed);
    for(int i=1;i<=10;i++){

        cout<<rand()<<endl;
    }


}
