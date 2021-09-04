// 2차원 배열 지그재그 채우기 8
// fill 2D array with zigzag pattern
# include <iostream>
int main(){
    int n,m,i,j,t=1,d[110][110]={};
    scanf("%d %d",&n,&m);
    for(j=m;j>0;j--){
        if(m%2==0){
            if(j%2==0){
                for(i=1;i<=n;i++)
                    d[i][j]=t++;
            }else{
                for(i=n;i>0;i--)
                    d[i][j]=t++;
            }
        }else{
            if(j%2==1){
                for(i=1;i<=n;i++)
                    d[i][j]=t++;
            }else{
                for(i=n;i>0;i--)
                    d[i][j]=t++;
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