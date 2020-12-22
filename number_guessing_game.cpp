#include<iostream>
using namespace std;
int main()
{
    cout<<"pick a number between 1 to 10:\n";
    char answer;
    cout<<"is it less than 5?(y/n)"<<endl;
    cin>>answer;
    if (answer=='y'){
        cout<<"is it less than 4?(y/n)\n";
        cin>>answer;
        if (answer=='y'){
            cout<<"is it less than 3?(y/n)"<<endl;
            cin>>answer;
            if(answer=='y'){
                cout<<"ïs it less than 2?(y/n)"<<endl;
                cin>>answer;
                if(answer=='y'){
                    cout <<"your number is 1"<<endl;
                }
                else
                {
                  cout<<"your number is 2"<<endl;
                }
                

            }
            else cout<<"your number is 3"<<endl;


        }
        else cout<<"your number is 4"<<endl;

    }
    else{
    
    cout<<"is it greater than 5?(y/n)"<<endl;
    cin >>answer;
    if (answer=='n'){
        cout<<"your number is 5"<<endl;
    }
    if (answer=='y'){
        cout<<"is it less than 10?(y/n)"<<endl;
        cin>>answer;
        if(answer=='y'){
            cout<<"is it greater than 6?(y/n)"<<endl;
            cin>>answer;
            if(answer=='y'){
                cout<<"is it less than 9?(y/n)"<<endl;
                cin>>answer;
                if (answer=='y'){
                    cout<<"is it greater than 7"<<endl;
                    cin>>answer;
                    if (answer=='y'){
                        cout<<"is it less than 8?(y/n)"<<endl;
                        cin>>answer;
                        if(answer=='y'){
                            cout<<"your number is 8"<<endl;
                        }

                    }
                    else cout<<"your number is 7"<<endl;

                }
                else cout<<"your number is 9"<<endl;

            }
            else cout<<"your number is 6\n";

        }
        else cout<<"your number is 10"<<endl;
    }
    }   
}