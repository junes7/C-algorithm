// 문자 한 개 입력받아 다음 문자 출력하기
// print next of one input character
// 영문자 한 개를 입력받아 그 다음 문자를 출력해보자. 영문자 "A"의
// 다음 문자는 "B"이고, 영문자 "0"의 다음 문자는 "1"이다.
# include <iostream>
int main() {
    char c;
    scanf("%c",&c);
    printf("%c",c+1);
    return 0;
}