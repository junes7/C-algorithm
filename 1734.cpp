//  2차원 배열 달팽이 채우기 2
// fill 2D array with snail pattern
# include <iostream>
int main(){
    int n,m,i=1,j=0,r=1,b,c,l=0,d[110][110]={};
    scanf("%d %d",&n,&m);
    for(c=n*m;c>0;){
        for(b=1;b<=m-l;b++){
            j+=r;
            d[i][j]=c--;
        }
        for(b=1;b<=n-l-1;b++){
            i+=r;
            d[i][j]=c--;
        }
        l++;
        r=-r;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}