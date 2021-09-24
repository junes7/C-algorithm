#include<iostream>
using namespace std;
class SimpleClass{
private:
    int num1,num2;
public:
    SimpleClass(){
        num1=0;
        num2=0;
    }
    SimpleClass(int n){
        num1=n;
        num2=0;
    }
    SimpleClass(int n1,int n2){
        num1=n1;
        num2=n2;
    }
    void ShowData(){
        cout<<num1<<' '<<num2<<endl;
    }
};
int main(void){
    SimpleClass sc1;
    SimpleClass sc2(100);
    SimpleClass sc3(100,200);
    sc1.ShowData();
    sc2.ShowData();
    sc3.ShowData();
}