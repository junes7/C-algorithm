// ���� ���� ������(Scope Resolution Operator)�� �� �ٸ� ���
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