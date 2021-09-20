// 범위 지정 연산자(Scope Resolution Operator)의 또 다른 기능
# include <iostream>
using namespace std;
int val=100;
int SimpleFunc(void){
    int val=20;
    val+=3;
    ::val+=7;
    return val;
}
int main(){
    cout<<SimpleFunc()<<endl;
    cout<<val<<endl;
}