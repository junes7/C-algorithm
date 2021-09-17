// 정수 세 개 입력받아 합과 평균 출력하기
// print sum and average of three integers
// 정수 세 개를 입력받아 합과 평균을 출력해보자.
// 단, -2147483648 ~ +2147483647
# include <iostream>
int main() {
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    printf("%lld\n%.1lf",a+b+c,(double)(a+b+c)/3);
    return 0;
}