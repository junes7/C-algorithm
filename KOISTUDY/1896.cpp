// 별 삼각형 출력하기
// print star triangle
// 한 정수 n을 입력받아 n층의 별 삼각형을 출력하시오.
// (단, 반복문은 사용할 수 없다.)
# include <iostream>
void g(int n){
    if(n<1) return;
    g(n-1);
    printf("*");
}
void s(int n){
    if(n<1) return;
    else{
        s(n-1);
        g(n);
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    s(n);
}