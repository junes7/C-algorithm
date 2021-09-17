// 정수 입력받아 아스키 문자로 출력하기
// print one input integer as ascii code
// 10진 정수 한 개를 입력받아 아스키 문자로 출력해보자.
// 단, 0 ~ 255 범위의 정수만 입력된다.
# include <iostream>
int main() {
    int n;
    scanf("%d",&n);
    printf("%c",n);
    return 0;
}