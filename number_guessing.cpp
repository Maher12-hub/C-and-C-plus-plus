#include<iostream>
using namespace std;
int main()
{
    cout<<"pick a number between 1 to 8"<<endl;
    char answer;
    cout<<"is it less than 8?(y/n)\n";
    cin >>answer;
    if (answer=='y'){
        cout<<"is it less than 7?(y/n)"<<endl;
        cin>>answer;
        if (answer=='y'){
            cout<<"is it less than 6?(y/n)\n";
            cin>>answer;
            if (answer=='y'){
                cout<<"is it less than 5?(y/n)"<<endl;
                cin>>answer;
                if (answer=='y'){
                    cout<<"is it less than 4?(y/n)"<<endl;
                    cin>>answer;
                    if(answer=='y'){
                        cout<<"is it less than 3?(y/n)"<<endl;
                        cin>>answer;
                        if (answer=='y'){
                            cout<<"is it less than 2?(y/n)"<<endl;
                            cin>>answer;
                            if (answer=='y'){
                                cout<<"your number is 2"<<endl;

                            }
                            else cout<<"your number is 1"<<endl;

                        }
                        else cout<<"your number is 3"<<endl;

                    }
                    else cout<<"your number is 4"<<endl;

                }
                else cout<<"your number is 5\n";

            }
            else cout<<"your number is 6\n";
            

        }
        else cout<<"your number is 7\n";


    }
    else cout<<"your number is 8\n";
}