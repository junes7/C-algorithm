// 1차원 배열 활용 1
// 1D array utilization
// 에라토스테네스의 체 활용하기
# include <iostream>
int n,i,j,k=1,d[550],p[101];
int main(){
    for(i=2;i<=550;i++)
        d[i]=i;
    for(i=2;i<=550;i++)
        for(j=i+i;j<=550;j+=i)
            d[j]=0;
    for(i=2;i<=550;i++)
        if(d[i]!=0)
            p[k++]=d[i];
    scanf("%d",&n);
    printf("%d",p[n]);
}