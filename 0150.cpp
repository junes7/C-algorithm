// 별 그리기 6(draw star)
// 한 정수 N일 입력받아서 N층의 이등변 삼각형 모양의 별을 출력하시오
// (단 1 <= N <= 100 , 재귀함수로 작성하시오.)
# include <iostream>
void g(int n){
    if(n<1) return;
    g(n-1);
    printf("*");
}
void s(int n,int t,int c){
    if(n<1) return;
    if(c<=t){
        s(n-1,t,c+1);
        g(c);
    }else{
        s(n-1,t,c+1);
        g(n);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    s(2*n-1,n,1);
}