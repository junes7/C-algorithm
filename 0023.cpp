// 단어 한 개 입력받아 나누어 출력하기
// print one word separately
// 단어를 하나 입력받는다. 입력받은 단어(영어)의 각 문자를 한줄에
// 한 문자씩 분리해 출력한다.
# include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        cout<<"\'"<<s[i]<<"\'\n";
    }
    return 0; 
}