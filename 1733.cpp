//  2차원 배열 달팽이 채우기 1
// fill 2D array with snail pattern
// 다음과 같은 n*m 배열 구조를 출력해보자.
// 입력이 3 4인 경우 다음과 같이 출력한다.
// 1 2 3 4
// 10 11 12 5
// 9 8 7 6
// 입력이 4 5인 경우는 다음과 같이 출력한다.
// 1 2 3 4 5
// 14 15 16 17 6
// 13 20 19 18 7
// 12 11 10 9 8
// 입력이 n m인 경우의 2차원 배열을 출력해보자.
# include <iostream>
int main(){
    int n,m,i=1,j=0,b,c,r=1,l=0,d[110][110]={};
    scanf("%d %d",&n,&m);
    for(c=1;c<=n*m;){
        for(b=1;b<=m-l;b++){
            j+=r;
            d[i][j]=c++;
        }
        for(b=1;b<=n-l-1;b++){
            i+=r;
            d[i][j]=c++;
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