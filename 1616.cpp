// 누적합 I(prefix sum)
// 누적합(Prefix Sum)은 가장 간단한 형태의 데이터처리 기법으로 어떤
// 위치까지의 합을 누적해 기록해두는 것이다. 누적합을 이용하면
// 반복적인 계산 상황에서 보다 적은 계산량으로 더 빠르게 계산할 수
// 있게 된다. n개의 데이터가 입력되었을 때 누적합을 계산해 보자.
# include <iostream>
int main(){
    int i,n,d[10010];
    long long int s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&d[i]);
    for(i=1;i<=n;i++){
        s+=d[i];
        printf("%lld ",s);
    }
}