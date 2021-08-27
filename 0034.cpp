// 16진 정수 한 개 입력받아 8진수로 출력하기
// print hexadecimal number as octal number
// 16진수로 입력된 정수 1개를 8진수로 바꾸어 출력해보자.
// method 1
# include <iostream>
int main() {
    int n;
    scanf("%x",&n);
    printf("%o",n);
    return 0;
}