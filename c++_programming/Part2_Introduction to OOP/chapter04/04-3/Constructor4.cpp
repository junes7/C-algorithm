// SimpleClass
// 0 0
// 100 0
// 100 200
#include<iostream>
using namespace std;
class SimpleClass{
private:
    int num1,num2;
public:
    SimpleClass(int n1=0,int n2=0):num1(n1),num2(n2){

    }
    void ShowData(){
        cout<<num1<<' '<<num2<<endl;
    }
};
int main(void){
    SimpleClass sc(100,200);
    sc.ShowData();
}
