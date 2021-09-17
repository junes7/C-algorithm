// 함수로 두 정수의 합 리턴하기
// return sum of two integers through function
// nt 형 정수 두 개를 입력 받아
// 두 수를 합한 결과를 출력하시오. 단, 함수형 문제이므로 함수 f()만
// 작성하여 제출하시오.
# include <iostream>
int n,m;
long long int f(int n, int m){
    return (long long int)n+m;
}
int main(){
    scanf("%d %d",&n,&m);
    printf("%lld\n",f(n,m));
}

