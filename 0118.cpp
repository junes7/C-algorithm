// 두 정수의 최대공약수 구하기
// get greatest common divisor of two integers
// 두 정수 a, b를 입력받아서, a, b의 최대공약수를 출력하시오.
// a의 약수이면서 동시에 b의 약수인 수들을 공약수라고 한다. 이러한
// 공약수들 중에서 가장 값이 큰 공약수를 최대공약수라고 한다. 예를
// 들어 12와 8의 경우, 12의 약수는 1, 2, 3, 4, 6, 12이고 8의 약수는
// 1, 2, 4, 8이다. 이 때 1, 2, 4가 12와 8의 공약수이고 이 중 가장
// 큰 4가 12와 8의 최대공약수이다.
# include <iostream>
int a,b;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
}