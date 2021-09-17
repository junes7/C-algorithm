// 2차원 배열 빗금 채우기 1
// fill 2D array with diagonal pattern
# include <iostream>
int main(){
    int n,m,i,j,k,t=1,d[110][110]={};
    scanf("%d %d",&n,&m);
    for(i=2;i<=n+m;i++){
        for(j=1;j<=m;j++){
            for(k=1;k<=n;k++){
                if(j+k==i)
                    d[k][j]=t++;
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