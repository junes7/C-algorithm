// 함수로 두 정수 중 큰 값 리턴하기
// return larger value of two integers through function
// int 형 정수 두 개를 입력 받아 그 중 큰 값을 출력하시오.
// 단, 함수형 문제이므로 함수 max()만 작성하여 제출하시오.
# include <iostream>
int n,m;
int max(int n,int m){
    return n>m?n:m;
}
int main(){
    scanf("%d %d",&n,&m);
    printf("%d\n",max(n,m));
}