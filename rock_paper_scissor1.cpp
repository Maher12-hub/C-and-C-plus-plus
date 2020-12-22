#include<iostream>
using namespace std;
enum choices{rock,scissor,paper};
enum Winner{player1,player2,tie};
int main(){
    
    int n;
    choices choice1,choice2;
    Winner winner;
    cout<<"choose rock(o),scissor(1),paper(2)"<<endl;
    cout<<"player#1"<<endl;
    cin>>n;
    choice1=choices(n);
    cout<<"player#2"<<endl;
    cin>>n;
    choice2=choices(n);
    if (choice1==choice2) winner=tie;
        else if(choice1==rock)
          if (choice2==scissor) winner=player1;
          else winner=player2;
    else if(choice1==scissor)
         if(choice2==paper) winner=player1;
         else winner=player2;
    else if(choice1==paper)
         if(choice2==rock) winner=player1;
         else winner=player2;
    if (winner==player1) cout<<"player#1 wins"<<endl;
    else if(winner==player2) cout<<"player#2 wins"<<endl;
    else if(winner==tie) cout<<"match tied"<<endl;



}