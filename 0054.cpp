// 하나라도 참이면 참 출력하기
// print true if anyone is true
// 두 개의 참(1) 또는 거짓(0)이 입력될 때, 하나라도 참이면
// 참을 출력하는 프로그램을 작성해보자.
# include <iostream>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a||b);
    return 0;
}