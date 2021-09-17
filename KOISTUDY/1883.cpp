// 함수로 배열의 부분합 리턴하기
// return partial sum of array through function
// 배열의 참조 범위([a, b], a번부터 ~ b번까지 범위, 폐구간 [a, b])를
// 받아 그 범위의 부분합을 출력하시오. 단, 함수형 문제이므로 함수
// subsetsum()만 작성하여 제출하시오.
# include <iostream>
int n,a,b,d[1010];
long long int subsetsum(int a,int b){
    long long int s=0;
    for(int i=a;i<=b;i++)
        s+=d[i];
    return s;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&d[i]);
    scanf("%d %d",&a,&b);
    printf("%lld\n",subsetsum(a,b));
}
