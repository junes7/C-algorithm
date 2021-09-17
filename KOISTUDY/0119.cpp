// 별 그리기 1(draw star)
// 한 정수 N일 입력받아서 2*N-1개의 별을 일렬로 그리시오.
// ( 단 1 <= N <= 100 )
# include <iostream>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n*2-1;i++){
        printf("*");
    }
}