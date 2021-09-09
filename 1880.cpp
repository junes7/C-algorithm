// 함수로 최대공약수 리턴하기
// return greatest common divisor through function
// int 형 자연수 두 개를 입력받아 최대공약수(GCD,
// Greatest Common Divisor)를 출력하시오.
// 단, 함수형 문제이므로 함수gcd()만 작성하여 제출하시오.
# include <iostream>
int a,b;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    scanf("%d %d",&a,&b);
    printf("%d\n",gcd(a,b));
}