// 두 정수 입력받아 비교하기 4
// comparison of two integers
// 두 정수(a, b)를 입력받아 a와 b가 서로 다르면 1을, 그렇지 않으면
// 0을 출력하는 프로그램을 작성해보자.
# include <iostream>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a!=b?1:0);
    return 0;
}