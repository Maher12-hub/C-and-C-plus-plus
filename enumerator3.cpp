#include<iostream>
using namespace std;
int main()
{
    enum sex{male=1,female=2};
    int entry_id;
    cout<<"enter entry id:\n";
    cin>>entry_id;
    if (entry_id==1)
    {
        cout<<"male"<<endl;
    }
    else
    {
        cout<<"female"<<endl;
    }
    
    
    return 0;

}