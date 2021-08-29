// 둘 다 참일 경우만 참 출력하기
// print true if both are true
// 두 개의 참(1) 또는 거짓(0)이 입력될 때,
// 모두 참일 때에만 참을 출력하는 프로그램을 작성해보자.
# include <iostream>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a&&b);
    return 0;
}