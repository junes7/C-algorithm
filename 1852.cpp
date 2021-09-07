// 함수로 hello 또는 world 출력하기
// print hello or world through function
// hello 또는 world 를 출력하시오. 단, 함수형 문제이므로 함수 f()만
// 작성하시오.
// 1 이 입력되면 hello, 2 가 입력되면 world 를 출력한다.
# include <iostream>
int n;
void f(int n){
    printf(n==1?"hello":"world");
}
int main(){
    scanf("%d",&n);
    f(n);
}