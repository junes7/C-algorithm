// 별 그리기 6.5(draw star)
// 한 정수 n을 입력받아서 다음 규칙을 별을 그리시오.
// n = 1
// *
// *
// n = 2
// **
// *
// *
// **
# include <iostream>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=0;j<i;j++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++)
            printf("*");
        printf("\n");
    }
}