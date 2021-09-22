# include <iostream>
using namespace std;
// 디폴트 값은 함수의 선언 부분에만 표현한다.
int Adder(int n1=1,int n2=2);
int main(void){
    cout<<Adder()<<endl;
    cout<<Adder(5)<<endl;
    cout<<Adder(3, 5)<<endl;
}
int Adder(int n1,int n2){
    return n1+n2;
}