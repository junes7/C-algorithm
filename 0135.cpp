// 배열 채우기 III
// fill array III
// 한 정수 n을 입력받아서 이차원 배열 n*n을 달팽이 모양으로 채워서
// 출력하는 프로그램을 작성하시오.
// n=3인 예
// 1 2 3
// 8 9 4
// 7 6 5
# include <iostream>
int main(){
    int n,i=1,j=0,b,c,r=1,l=0,d[110][110]={};
    scanf("%d",&n);
    for(c=1;c<=n*n;){
        for(b=1;b<=n-l;b++){
            j+=r;
            d[i][j]=c++;
        }
        for(b=1;b<n-l;b++){
            i+=r;
            d[i][j]=c++;
        }
        l++;
        r=-r;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}