// 비트단위로 바꿔 출력하기
// print integer as bitwise type
// 입력 된 정수를 비트단위로 참/거짓을 바꾼 후 정수로 출력해보자.
// 비트단위(bitwise)연산자 ~ 를 붙이면 된다.(~ : tilde, 틸드라고
// 읽는다.)
// 비트단위(bitwise) 연산자는,~(bitwise not), &(bitwise and),
// |(bitwise or), ^(bitwise xor),<<(bitwise left shift),
// >>(bitwise right shift)가 있다.
# include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    cout<<~a;
    return 0;
}