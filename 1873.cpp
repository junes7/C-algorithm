// 함수로 n의 약수의 개수 리턴하기
// return number of divisors of n through function
// int 형 자연수 한 개를 입력 받아 약수의 개수를 출력하시오.
// 자연수 8은 1, 2, 4, 8 로 나누어떨어지므로 약수가 4개 이다.
// 단, 함수형 문제이므로 함수 f()만 작성하여 제출하시오.
# include <iostream>
int n;
int f(int n){
    int i,c=1;
    for(i=2;i<=n;i++)
        if(n%i==0)
            c++;
    return c;
}
int main(){
    scanf("%d",&n);
    printf("%d\n",f(n));
}
