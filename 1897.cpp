// 수 삼각형 출력하기
// print number triangle
// 한 정수 n을 입력받아 n층의 수 삼각형을 출력하시오. (단, 반복문은
// 사용할 수 없다.)
# include <iostream>
int n;
void g(int k){
    if(k<1) return;
    g(k-1);
    printf("%d ",k);
}
void f(int n){
    if(n<1) return ;
    f(n-1);
    g(n);
    printf("\n");
}
int main(){
    scanf("%d",&n);
    f(n);
}