#include<iostream>
using namespace std;
int simObjCnt;
int cmxObjCnt;
class SoSimple{
public:
    SoSimple(){
        simObjCnt++;
        cout<<simObjCnt<<"��° SoSimple ��ü"<<endl;
    }
};
class SoComplex{
public:
    SoComplex(){
        cmxObjCnt++;
        cout<<cmxObjCnt<<"��° SoComplex ��ü"<<endl;
    }
    SoComplex(const SoComplex &copy){
        cmxObjCnt++;
        cout<<cmxObjCnt<<"��° SoComplex ��ü"<<endl;
    }
};
int main(void){
    SoSimple sim1;
    SoSimple sim2;
    SoComplex com1;
    SoComplex com2=com1;
    SoComplex();
}