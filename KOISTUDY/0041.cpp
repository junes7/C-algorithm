// 정수 두 개 입력받아 나눈 몫 출력하기
// print divided quotient of two integers
// 정수 두 개(a, b) 를 입력받아 a를 b로 나눈 몫을 출력해보자.
// 단, -2147483648 <= a <= b <= +2147483647, b는 0이 아니다.
# include <iostream>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a/b);
    return 0;
}