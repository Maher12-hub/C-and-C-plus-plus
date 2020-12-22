#include<iostream>
using namespace std;
int main()
{
    int date;
    int amount;
    cout<<"please enter the date:\n";
    cin>>date;
    cout<<"please enter the amount"<<endl;
    cin>>amount;
    if (date<23)
    {
        if (amount==7000){
            cout<<"you can continue with the batch:"<<endl;
        }
        else
        {
            cout<<"you cant continue with the batch:"<<endl;
        }
        
        }
        else
        {
            cout<<"you cant continue with the batch:"<<endl;
        }
}