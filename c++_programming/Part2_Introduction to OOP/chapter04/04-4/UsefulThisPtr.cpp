#include<iostream>
#include<cstring>
using namespace std;
class TwoNumber{
private:
    int num1,num2;
public:
    TwoNumber(int num1,int num2){
        this->num1=num1;
        this->num2=num2;
    }
    void ShowTwoNumber(){
        cout<<num1<<endl;
        cout<<num2<<endl;
    }
};
int main(void){
    TwoNumber two(2, 4);
    two.ShowTwoNumber();
}