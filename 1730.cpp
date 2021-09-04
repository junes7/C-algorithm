// 2차원 배열 빗금 채우기 6
// fill 2D array with diagonal pattern
// 입력이 3 4인 경우 다음과 같이 출력한다.
// 12 11 9 6
// 10 8 5 3
// 7 4 2 1
# include <iostream>
int main(){
    int n,m,i,j,k,t=1,d[110][110]={};
    scanf("%d %d",&n,&m);
    for(i=n+m;i>0;i--){
        for(j=n;j>0;j--){
            for(k=m;k>0;k--){
                if(j+k==i)
                    d[j][k]=t++;
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}