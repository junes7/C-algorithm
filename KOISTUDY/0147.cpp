// GCD(Greatest Common Divisor)
// 두 정수 a, b를 입력받아서, a, b의 최대공약수를 출력하시오.
// 입력은 키보드로 부터 이루어진다. 정수 a, b가 공백으로
// 구분되어 입력된다. 단, 1 <= a, b <= 10,000, 재귀함수로 작성하시오.
# include <iostream>
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
}