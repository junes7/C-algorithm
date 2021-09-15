// 1차원 차이 배열 만들기
// create 1D difference array
// 크기가 n인 1차원 배열 d[]에 대해
// k개의 구간 [s, e]와 u를 입력 받아,
// d[s] = d[s]+u;
// d[e+1] = d[e+1]-u;
// 를 수행한 후, 누적 합을 만들어 출력해보자.
// 크기가 7이고, 4개의 구간 데이터
// 1 2 1
// 2 3 1
// 3 4 1
// 4 5 1 가 입력되면
// 1차원 배열의 상태는 1 1 0 0 –1 –1 0 가 되며
// 그 누적합을 계산하면 아래와 같다. 1 2 2 2 1 0 0
# include <iostream>
int main(){
    int t=0,i,n,k,s,e,u,d[110]={};
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++){
        scanf("%d %d %d",&s,&e,&u);
        d[s]+=u;
        d[e+1]-=u;
    }
    for(i=1;i<=n;i++)
        printf("%d ",d[i]);
    printf("\n");
    for(i=1;i<=n;i++){
        t+=d[i];
        printf("%d ",t);
    }
}