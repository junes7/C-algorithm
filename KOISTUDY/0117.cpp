// 1~n사이의 소수의 합 구하기
// 임의의 한 정수 n을 입력받아서, [1,n]범위에서 소수의 합을
// 출력하시오. [a, b] 는 a이상 b이하를 의미한다. [a, b)는 a이상
// b미만의 범위를 의미함.
# include <iostream>
int s=0,i,j,n,d[10010];
int main(){
    scanf("%d",&n);
    for(i=2;i<=n;i++)
        d[i]=i;
    for(i=2;i<=n;i++)
        for(j=i+i;j<=n;j+=i)
            d[j]=0;
    for(i=2;i<=n;i++)
        if(d[i]!=0)
            s+=d[i];
    printf("%d",s);
}