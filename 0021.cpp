// 문장 한 개 입력받아 그대로 출력하기
// print one input sentence
// 공백이 포함되어 있는 한 문장을 입력받아 그대로 출력하는 연습을 해보자.
# include <iostream>
using namespace std;
int main() {
    char s[2000];
    fgets(s,2000,stdin);
    cout<<s;
    return 0;
}