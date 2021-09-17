// 함수로 소수 부분만 리턴하기
// return decimal point only through function
// 실수(real number)를 입력 받아 소수 부분만 출력하시오. 단, 함수형
// 문제이므로 함수 f()만 작성해 제출하시오.
# include <iostream>
double x;
double f(double x){
    return x-(int)x;
}
int main(){
    scanf("%lf",&x);
    printf("%.14lf\n",f(x));
}