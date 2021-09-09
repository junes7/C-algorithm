// 함수로 두 정수 중 작은 값 리턴하기
// return smaller value of two integers through function
// int 형 정수 두 개를 입력 받아 그 중 작은 값을 출력하시오.
// 단, 함수형 문제이므로 함수 min()만 작성하여 제출하시오.
# include <iostream>
int n,m;
int min(int n,int m){
    return n<m?n:m;
}
int main(){
    scanf("%d %d",&n,&m);
    printf("%d\n",min(n,m));
}
