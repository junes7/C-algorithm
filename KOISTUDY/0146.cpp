// 1~n까지의 합 (Recursion Version)
// sum of 1 to n
// 한 정수 n을 입력받아서 1부터 n까지의 합을 구하여 출력하시오.
// (반복문은 사용할 수 없습니다.)
# include <iostream>
int f(int n){
    return (n+1)*n/2;
}
int main(){
    int i,n;
    scanf("%d",&n);
    printf("%d",f(n));
}