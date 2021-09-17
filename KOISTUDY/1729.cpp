// 2차원 배열 빗금 채우기 5
// fill 2D array with diagonal pattern
# include <iostream>
int main(){
    int n,m,i,j,k,t=1,d[110][110]={};
    scanf("%d %d",&n,&m);
    for(i=n+m;i>0;i--){
        for(j=m;j>0;j--){
            for(k=n;k>0;k--){
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