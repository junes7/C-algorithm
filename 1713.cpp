// 2차원 배열 순서대로 채우기 5
// fill 2D array in order
# include <iostream>
int main(){
    int n,m,i,j,t=1,d[110][110]={};
    scanf("%d %d",&n,&m);
    for(i=n;i>0;i--){
        for(j=m;j>0;j--){
            d[i][j]=t++;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}