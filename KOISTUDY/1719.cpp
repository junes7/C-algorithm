// 2차원 배열 지그재그 채우기 3
// fill 2D array with zigzag pattern
# include <iostream>
int main(){
    int n,i,j,t=1,d[110][110]={};
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        if(j%2==1){
            for(i=1;i<=n;i++){
                d[i][j]=t++;
            }
        }else{
            for(i=n;i>0;i--){
                d[i][j]=t++;
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}