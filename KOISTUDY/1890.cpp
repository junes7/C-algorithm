// 재귀로 1부터 n까지 합 리턴하기
// return sum 1 to n with recursion
// 한 정수 n을 입력받아 1부터 n까지의 정수 합을 출력하시오.
// (단, 반복문은 사용할 수 없다.)
# include <iostream>
int n;
int s(int n){
    if(n<=1) return 1;
    else return s(n-1)+n;
}
int main(){
    scanf("%d",&n);
    printf("%d",s(n));
}