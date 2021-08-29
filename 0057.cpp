// 둘 다 거짓일 경우만 참 출력하기
// print true when both are false
// 두 개의 참(1) 또는 거짓(0)이 입력될 때,
// 모두 거짓일 때에만 참이 계산되는 프로그램을 작성해보자.
# include <iostream>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",!(a||b));
}