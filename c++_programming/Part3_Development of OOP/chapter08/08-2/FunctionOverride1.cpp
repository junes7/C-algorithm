#include<iostream>
using namespace std;
class First{
public:
    void FirstFunc() const{cout<<"FistFunc"<<endl;}
};
class Second:public First{
public:
    void SecondFunc() const{cout<<"SecondFunc"<<endl;}
};
class Third:public Second{
public:
    void ThirdFunc() const{cout<<"ThirdFunc"<<endl;}
};
int main(void){
    Third *tptr=new Third();
    Second *sptr=tptr;
    First *fptr=sptr;

    tptr->FirstFunc();
    tptr->SecondFunc();
    tptr->ThirdFunc();

    sptr->FirstFunc();
    sptr->SecondFunc();

    fptr->FirstFunc();
}