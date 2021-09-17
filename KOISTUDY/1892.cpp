// 재귀로 n번째 피보나치 수 리턴하기
// return nth fibonacci number with recursion
// 한 정수 n을 입력받아 n번째 피보나치 수를 출력하시오. (단, 반복문은
// 사용할 수 없다.)
# include <iostream>
int n,d[31];
int f(int n){
    if(n<=2)
        d[n]=1;
    else
        d[n]=f(n-1)+f(n-2);
    return d[n];
}
int main(){
    scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;
}