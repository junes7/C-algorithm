// 별 그리기 2(draw star)
// 한 정수 N일 입력받아서 N층의 삼각형 모양의 별을 출력하시오.
// ( 단 1 <= N <= 100 )
# include <iostream>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}