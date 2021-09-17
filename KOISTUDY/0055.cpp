// 참/거짓이 서로 다를 때에만 참 출력하기
// print true when true/false are different each other
// 두 가지의 참(1) 또는 거짓(0)이 입력될 때, 참/거짓이
// 서로 다를 때에만 참을 출력하는 프로그램을 작성해보자.
# include <iostream>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",!a&&b||a&&!b);
    return 0;
}