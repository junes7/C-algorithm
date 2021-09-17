// 함수로 * n개 출력하기
// print * n times through function
// * 을 n개 출력하시오. 단, 함수형 문제이므로 함수 f()만
// 작성하시오.
# include <iostream>
int n;
void f(int n){
    for(int i=0;i<n;i++)
        printf("*");
}
int main(){
    scanf("%d",&n);
    f(n);
}