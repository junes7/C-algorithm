// 함수로 최대공약수 구하기
// get gcd(greatest common divisor) through function
// 두 정수 a, b를 입력받아서, a, b의 최대공약수를 출력하시오.
# include <iostream>
int get_gcd(int a,int b){
    return b==0?a:get_gcd(b,a%b);
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",get_gcd(x,y));
}