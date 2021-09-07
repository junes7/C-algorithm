// 함수로 odd 또는 even 출력하기
// print odd or even through function
// odd 또는 even 을 출력하시오. 단, 함수형 문제이므로
// 함수 f()만 작성하시오.
# include <iostream>
int n;
void f(int k){
    printf(k%2==1?"odd":"even");
}
int main(){
    scanf("%d",&n);
    f(n);
}