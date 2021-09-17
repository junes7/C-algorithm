// 함수로 n까지의 합 리턴하기
// return sum to n through function
// int 형 정수 한 개를 입력 받아 1부터 n까지의 정수합을 계산해 출력.
// (0 <= n <= 10000000)단, 함수형 문제이므로 함수 f()만 작성 및 제출.
# include <iostream>
int n;
long long int f(int n){
    return (long long int)n*(n+1)/2;
}
// long long int f(int n){
//     long long int s=0;
//     for(int i=1;i<=n;i++){
//         s+=i;
//     }
//     return s;
// }
int main(){
    scanf("%d",&n);
    printf("%lld\n",f(n));
}