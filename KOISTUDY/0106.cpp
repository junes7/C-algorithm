// 두 수의 대소 비교하기
// comparison of two numbers
// 두 정수 a, b를 입력받아서 두 수 중 큰 수를 출력하시오.
# include <iostream>
int main(){
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",a>b?a:b);
}