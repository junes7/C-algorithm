// 함수로 정수 뒤집어 리턴하기
// return flip the integer through function
// long long int 형 정수 한 개를 입력 받아 숫자를 거꾸로 뒤집은 수를
// 출력하시오.(단, 마지막 1의 자리의 수가 0인 수는 입력되지 않는다.)
// 123456789 를 거꾸로 뒤집은 수는 987654321 이다. 단, 함수형
// 문제이므로 함수 f()만 작성하여 제출하시오.
# include <iostream>
long long int n;
long long int f(long long int n){
    while(n>9){
        printf("%d",n%10);
        n/=10;
    }
    return n;
}
int main(){
    scanf("%lld",&n);
    printf("%lld\n",f(n));
}