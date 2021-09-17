// 함수로 가장 작은 값 리턴하기
// return the smallest value through function
// 배열에서 가장 작은 값을 출력하시오. 단, 함수형 문제이므로 함수 f()만
// 작성하시오.
# include <iostream>
int n;
long long int d[110];
long long int f(){
    long long int m=d[1];
    for(int i=2;i<=n;i++){
        if(m>d[i])
            m=d[i];
    }
    return m;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%lld",&d[i]);
    printf("%lld\n",f());
}