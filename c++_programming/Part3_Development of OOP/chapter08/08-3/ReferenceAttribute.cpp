#include<iostream>
using namespace std;
class First{
public:
    void FirstFunc() const{cout<<"FirstFunc"<<endl;}
    virtual void SimpleFunc() const{cout<<"First's SimpleFunc"<<endl;}
};
class Second:public First{
public:
    void SecondFunc() const{cout<<"SecondFunc"<<endl;}
    void SimpleFunc() const{cout<<"Second's SimpleFunc"<<endl;}
};
class Third:public Second{
public:
    void ThirdFunc() const{cout<<"ThirdFunc"<<endl;}
    void SimpleFunc() const{cout<<"Third's SimpleFunc"<<endl;}
};
int main(void){
    Third obj;
    obj.FirstFunc();
    obj.SecondFunc();
    obj.ThirdFunc();
    obj.SimpleFunc();
    Second &sref=obj;
    sref.FirstFunc();
    sref.SecondFunc();
    sref.SimpleFunc();
    First &fref=obj;
    fref.FirstFunc();
    fref.SimpleFunc();
}
