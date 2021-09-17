// 최대 약수 구간(Small)
// maximum divisor range
// 간단한 약수 관련 문제를 해결해보자. 하나의 자연수 N주어진다.1부터
// N까지의 자연수 중에서 약수의 개수가 가장 많은 자연수의 최솟값부터
// N까지의 길이를 구하시오.(19:16변경)
# include <iostream>
int main(){
    int i,j,c,d[100010],n,m=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=0;
        for(j=1;j<=i;j++)
            if(i%j==0)
                c+=1;
        d[i]=c;
        if(m<d[i])
            m=d[i];
    }
    for(i=1;i<=n;i++)
        if(m==d[i]){
            printf("%d",n-i+1);
            break;
        }
}