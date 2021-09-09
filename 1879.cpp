// 함수로 세 정수 중 중간 값 리턴하기
// return median value of three integers through function
// int 형 정수 세 개를 입력 받아 중간 값을 출력하시오.
// 단, 함수형 문제이므로 함수 mid()만 작성하여 제출하시오.
# include <iostream>
int n,m,x;
int max(int p,int q){return p>=q?p:q;}
int min(int p,int q){return p<q?p:q;}
int mid(int p,int q,int r){
return p+q+r-max(max(p,q),r)-min(min(p,q),r);
}
int main(){
    scanf("%d %d %d",&n,&m,&x);
    printf("%d\n",mid(n,m,x));
}