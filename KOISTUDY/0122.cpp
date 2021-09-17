// 구구단 출력하기
// print multiplication table
// 한 정수 N일 입력받아서 N단을 출력하는 프로그램을 작성하시오.
// (단, N이 1일 경우는 모든 구구단 표를 출력한다. (단 1 <= N <= 9)
# include <iostream>
int main(){
    int i,j,n;
    scanf("%d",&n);
    if(n==1){
        for(i=1;i<10;i++){
            for(j=2;j<10;j++){
                printf("%d*%d=%d ",j,i,j*i);
            }
            printf("\n");
        }
    }else{
        for(i=1;i<10;i++){
            printf("%d*%d=%d\n",n,i,n*i);
        }
    }
}