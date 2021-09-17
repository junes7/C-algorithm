// 정수 한 개 입력받아 평가 출력하기
// print evaluation of one input integer
// 점수(정수, 0 ~ 100)를 입력받아 평가를 출력해보자.
// 평가 기준
// 점수 범위 : 평가
//  90 ~ 100 : A
//  70 ~  89 : B
//  40 ~  69 : C
//    0 ~  39 : D
// 로 평가되어야 한다.
# include <iostream>
int main() {
    int a;
    char t;
    scanf("%d",&a);
    if(a>=90)
        t='A';
    else if(a>=70)
        t='B';
    else if(a>=40)
        t='C';
    else
        t='D';
    printf("%c",t);
}