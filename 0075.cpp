// 문자 한 개 입력받아 알파벳 출력하기
// print alphabet until one input character
// 영문자(a ~ z) 한 개가 입력되었을 때 그 문자까지의 알파벳을
// 순서대로 출력해보자.
# include <iostream>
int main(){
    char c='a',t;
    scanf("%c",&t);
    while(c<=t)
        printf("%c ",c++);
    return 0;
}