// 최대공약수(greatest common divisor)
// 세 정수 A, B, C를 입력받아서 최대공약수를 구하는 프로그램을
// 작성하시오.
# include <iostream>
int a,b,c;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",gcd(gcd(a,b),c));
}