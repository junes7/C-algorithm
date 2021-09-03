// 재귀로 각 자리 수의 합 리턴하기
// return sum of each digit with recursion
// 한 정수 n을 입력받아 각 자리 수의 합을 출력하시오. (단, 반복문은
// 사용할 수 없다.)
# include <iostream>
long long int s(long long int n,long long int t){
    if(n==0) return t;
    else{
        t+=n%10;
        return s(n/10,t);
    }
}
int main(){
    long long int n;
    scanf("%lld",&n);
    printf("%lld",s(n,0));
}