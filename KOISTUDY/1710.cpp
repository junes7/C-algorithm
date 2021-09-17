// 2차원 배열 순서대로 채우기 2
// fill 2D array in order
# include <iostream>
int main(){
    int n,i,j,t=1,d[110][110]={};
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>0;j--){
            d[i][j]=t++;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}