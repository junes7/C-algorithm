// 홀수, 짝수 판별하기(NTTP)
// 한 정수를 입력받아 그 값이 홀수인지 짝수인지 판별하시오.
# include <iostream>
int main(){
    long long int n;
    scanf("%lld",&n);
    printf(n%2==1?"odd":"even");
}