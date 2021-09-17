// 정수 세 개 입력받아 가장 작은 수 출력하기
// print the smallest value of three integers
// 입력된 세 정수 a, b, c 중 가장 작은 값을 출력하는 프로그램을
// 작성해보자.단, 조건문을 사용하지 않고 3항 연산자 ? 를 사용한다.
# include <iostream>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",(a<b?a:b)<c?(a<b?a:b):c);
}