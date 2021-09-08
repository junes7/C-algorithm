// 함수로 정수 부분만 리턴하기
// return integer part only through function
// 실수(real number)를 입력 받아 정수 부분만 출력하시오. 단, 함수형
// 문제이므로 함수 f()만 작성해 제출하시오.
# include <iostream>
float x;
int f(float x){
    return (int)x;
}
int main(){
    scanf("%f",&x);
    printf("%d\n",f(x));
}