// 함수로 negative/zero/positive 출력하기
// print negative/zero/positive through function
// negative, zero, positive 중 하나를 출력하시오. 단, 함수형
// 문제이므로 함수 f()만 작성하시오.
# include <iostream>
int n;
void f(int n){
    printf(n<0?"negative":(n==0?"zero":"positive"));
}
int main(){
    scanf("%d",&n);
    f(n);
}