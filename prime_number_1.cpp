#include<iostream>
using namespace std;
int main(){
    long n;
    cout<<"enter a positive integer:"<<endl;
    cin>>n;
    if(n<2) cout<<n<<" is not prime"<<endl;
    else if(n<4) cout<<n<<" is prime"<<endl;
    else if(n%2==0) cout<<"2 * "<<n/2<<endl;
    else {
        for (int d=3;d<n/2;d+=2){
        if (n%d==0){ 
            cout<<d<<" * "<<n/d<<endl;
            exit(0);
        }
        }
    
        cout<<n<<" is prime"<<endl;
        
    };

}