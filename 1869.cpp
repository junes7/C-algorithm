// 함수로 정수 올림 한 값 리턴하기
// return integer round up through function
// 실수(real number)를 입력 받아 정수로 올림해 출력하시오. 단,
// 함수형 문제이므로 함수 f()만 작성해 제출하시오.
# include <iostream>
double x;
long long int f(double x){
    long long int t=(long long int)x;
    return t<x?x+1:x;
}
int main(){
    scanf("%lf",&x);
    printf("%lld\n",f(x));
}