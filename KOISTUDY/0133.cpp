// 배열 채우기 I
// fill array I
// 한 정수 n을 입력받아서 이차원 배열 n*n을 아래와 같이 채워서
// 출력하는 프로그램을 작성하시오.
// n=3인 예
// 1 2 3
// 4 5 6
// 7 8 9
# include <iostream>
int main(){
    int n,i,j,t=1,d[110][110]={};
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
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