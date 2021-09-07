// 함수로 false 또는 true 출력하기
// print false or true through function
// false 또는 true 를 출력하시오. 단, 함수형 문제이므로 함수 f()만
// 작성하시오.
# include <iostream>
int n;
void f(int n){
    printf(n==0?"false":"true");
}
int main(){
    scanf("%d",&n);
    f(n);
}