// 함수로 1~n까지의 합 구하기
// get sum of 1 to n through function
// 한 정수 n을 입력받아서 1부터 n까지의 합을 구하여 출력하시오. 단,
// 함수형 문제이므로 함수 f()만 작성하시오.
# include <iostream>
int f(int n){
    return n*(n+1)/2;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
}