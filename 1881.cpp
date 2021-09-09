// 함수로 최소공배수 리턴하기
// return least common multiple through function
// int 형 자연수 두 개를 입력받아 최소공배수
// (LCM, Least Common Multiple)를 출력하시오.
// 단, 함수형 문제이므로 함수 lcm()만 작성하여 제출하시오.
# include <iostream>
int a,b;
int gcd(int p,int q){
    return p==0?q:gcd(q%p,p);
}
long long int lcm(int p,int q){
    return (long long int)p*q/gcd(p,q);
}
int main(){
    scanf("%d %d",&a,&b);
    printf("%lld\n",lcm(a,b));
}
