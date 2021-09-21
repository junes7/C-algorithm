// 참조자(reference)를 이용해서 다음 요구사항에 부합하는 함수를 각각
// 정의하여라.
// *인자로 전달된 int형 변수의 값을 1싹 증가시키는 함수
// *인자로 전달된 int형 변수의 부호를 바꾸는 함수
# include <iostream>
using namespace std;
void IncreOne(int &n){
    n++;
}
void InverSign(int &n){
    n=-n;
}
int main(void){
    int n=20;
    IncreOne(n);
    cout<<"val: "<<n<<endl;
    InverSign(n);
    cout<<"val: "<<n<<endl;
}