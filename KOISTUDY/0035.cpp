// 영문자 한 개 입력받아 10진수로 출력하기
// print one input alphabet as decimal number
// 영문자 한 개를 입력받아 아스키 코드표의 10진수 값으로 출력해보자.
// method 1
# include <iostream>
int main() {
    char c;
    scanf("%c",&c);
    printf("%d",c);
    return 0;
}