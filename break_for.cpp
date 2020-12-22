#include<iostream>
using namespace std;
int main(){
int n,count=0;
int bound;
long sum=0;
cout<<"enter a positive integer:"<<endl;
cin>>n;
cout<<"enter the bound:"<<endl;
cin>>bound;
for(int i=1;i<=n;i++){
        if(sum>bound){
           int a=sum-bound;
            sum=sum-a;
            break;
        }
        count+=1;
        sum+=i;


}
cout<<"sum="<<sum<<" and count="<<count;
}
