#include<iostream>
using namespace std;
int main()
{
    double score;
    cout<<"enter your score:"<<endl;
    cin>>score;
    if (score>=90) {
        cout<<"grade=A+"<<endl;
        cout<<"grade point 4"<<endl;
    }
    else if(score>=80){
        cout<<"grade=A"<<endl;
        cout<<"grade point 3.5"<<endl;

    }
    else if(score>=70){
        cout<<"grade=B+"<<endl;
        cout<<"grade point 3"<<endl;
    }
    else if(score>=60){
        cout<<"grade=B"<<endl;
        cout<<"grade point 2.5"<<endl;
    }
    else if(score>=50){
        cout<<"grade=C+"<<endl;
        cout<<"grade point 2"<<endl;
    }
    else if(score>=40){
        cout<<"grade=c"<<endl;
        cout<<"grade point 1.5"<<endl;
    }
    else if(score>=33){
        cout<<"grade=D"<<endl;
        cout<<"grade point 1"<<endl;
    }
    else if(score<=32){
        cout<<"grade=F"<<endl;
        cout<<"grade point 0"<<endl;
    }

}