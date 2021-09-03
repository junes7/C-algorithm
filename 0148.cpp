// 별 그리기 4 (NTTP)(draw star)
// 한 정수 N일 입력받아서 2*N-1개의 별을 일렬로 그리시오.
// ( 단 1 <= N <= 100 , 재귀함수로 작성하시오.)
# include <iostream>
int n;
void s(int n){
    if(n<1) return;
    else{
        printf("*");
        return s(n-1);
    }
}
int main(){
    scanf("%d",&n);
    s(2*n-1);
}