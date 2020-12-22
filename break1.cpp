#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    long sum=0;
    cout<<"enter a positive integer "<<endl;
    cin>>n;
    while(true){
        sum+=i;
        i++;
        if(i>n) break;
        

    }
    cout<<"the sum of the first "<<n<<" integer is "<<sum;
}