#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    long sum=1;
    cout<<"enter a positive integer:"<<endl;
    cin>>n;
    do{
        sum*=i;
        i++;
    }while(i<=n);
    cout<<"factorial of "<<n<<" is "<<sum;
}