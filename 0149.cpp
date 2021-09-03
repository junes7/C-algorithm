// 별 그리기 5 (NTTP)(draw star)
// 한 정수 N일 입력받아서 N층의 삼각형 모양의 별을 출력하시오
// (단 1 <= N <= 100 , 재귀함수로 작성하시오.)
# include <iostream>
void p(int t){
    if(t<1){
        printf("\n");
        return;
    }else{
        printf("*");
        return p(t-1);
    }
}
void s(int n,int t){
    if(t>n) return;
    else{
        p(t);
        return s(n,t+1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    s(n,1);
}