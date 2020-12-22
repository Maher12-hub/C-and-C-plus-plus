#include<iostream>
using namespace std;
int main(){
    int a,b;
    int n;
    cout<<"enter the number n:"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        a=0;
        if(i==1){
            continue;
        }
        for (int j=1;j<i;j++){
            
            if(j!=1 && i%j==0) {
                cout<<i<<" is not prime"<<endl;
                a=1;
                break;
            }
        }

        if (a==1) continue;
        cout<<i<<" is prime"<<endl;
        
        
    }
   

}