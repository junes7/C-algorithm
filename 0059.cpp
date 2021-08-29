// 비트단위로 and 하여 출력하기
// print the result of bitwise and
// 입력된 정수 두 개를 비트단위로 and 연산한 후 그 결과를 정수로
// 출력해보자. 비트단위(bitwise)연산자 &를 사용하면 된다.(and,
// ampersand, 앰퍼센드라고 읽는다.)
# include <iostream>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a&b);
    return 0;
}