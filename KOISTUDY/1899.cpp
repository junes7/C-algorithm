// n번째 피보나치 수 출력하기(재귀)(memoization)
// print nth fibonacci number with memoization and recursion
// n번째 피보나치 수를 1000000007(10억7)로 나눈 나머지를 출력하시오.
// (단, 반복문은 사용할 수 없다.)
# include <iostream>
int n;
long long int d[110]={};
long long int f(int n){
    if(n<=2){
        d[n]=1;
        return d[n];
    }else if(d[n]!=0)
        return d[n];
    else{
        d[n]=(f(n-1)+f(n-2))%1000000007;
        return d[n];
    }
}
int main(){
    scanf("%d",&n);
    printf("%lld",f(n));
}