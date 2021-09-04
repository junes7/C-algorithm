// 2차원 배열 지그재그 채우기 5
// fill 2D array with zigzag pattern
# include <iostream>
int main(){
    int n,m,i,j,t=1,d[110][110]={};
    scanf("%d %d",&n,&m);
    for(i=n;i>0;i--){
        if(n%2==1){
            if(i%2==1){
                for(j=m;j>0;j--){
                    d[i][j]=t++;
                }
            }else{
                for(j=1;j<=m;j++){
                    d[i][j]=t++;
                }
            }
        }else{
            if(i%2==0){
                for(j=m;j>0;j--){
                    d[i][j]=t++;
                }
            }else{
                for(j=1;j<=m;j++){
                    d[i][j]=t++;
                }
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