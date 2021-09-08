// 함수로 n!(팩토리얼) 리턴하기
// return n factorial through function
// int 형 정수 한 개를 입력 받아 n!(팩토리얼)을 계산해 출력.
// (1 <= n <= 20)
// n!(팩토리얼)은 1부터 n까지 모두 곱한 수를 의미한다. 5! 은
// 1*2*3*4*5 = 120 이다.
// 단, 함수형 문제이므로 함수 f()만 작성하여 제출하시오.
# include <iostream>
int n;
long long int f(int n){
    return n<=1?1:n*f(n-1);
}
int main(){
    scanf("%d",&n);
    printf("%lld\n",f(n));
}