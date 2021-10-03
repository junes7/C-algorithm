// 다중상속의 모호성(Ambiguous of Multi Inheritance)
#include<iostream>
using namespace std;
class BaseOne{
public:
    void SimpleFunc() const{cout<<"BaseOne"<<endl;}
};
class BaseTwo{
public:
    void SimpleFunc() const{cout<<"BaseTwo"<<endl;}
};
class MultiDerived:public BaseOne,protected BaseTwo{
public:
    void ComplexFunc(){
        BaseOne::SimpleFunc();
        BaseTwo::SimpleFunc();
    }
};
int main(void){
    MultiDerived mdr;
    mdr.ComplexFunc();
}