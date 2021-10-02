#include<iostream>
using namespace std;
class First{
public:
    virtual void MyFunc() const{cout<<"FirstFunc"<<endl;}
};
class Second:public First{
public:
    virtual void MyFunc() const{cout<<"SecondFunc"<<endl;}
};
class Third:public Second{
public:
    virtual void MyFunc() const{cout<<"ThirdFunc"<<endl;}
};
int main(void){
    Third *tptr=new Third();
    Second *sptr=tptr;
    First *fptr=sptr;
    fptr->MyFunc();
    sptr->MyFunc();
    tptr->MyFunc();
    delete tptr;
}