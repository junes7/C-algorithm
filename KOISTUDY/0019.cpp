// 주민번호 입력받아 형태 바꿔 출력하기
// print social security number
// 주민번호는 다음과 같이 구성된다. XXXXXX-XXXXXXX
// 앞의 6자리는 생년월일(yymmdd)이고 뒤 7자리는 성별, 지역,
// 오류검출코드이다. 주민번호를 입력받아 형태를 바꿔 출력해보자.
# include <iostream>
using namespace std;
int main() {
    string s,s1,s2;
    int i,ss1,ss2;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]=='-'){
            s1=s.substr(0,i);
            break;
        }
    }
    s2=s.substr(i+1);
    ss1=atoi(s1.c_str());
    ss2=atoi(s2.c_str());
    cout.width(6);
    cout.fill('0');
    cout<<ss1;
    cout.width(7);
    cout.fill('0');
    cout<<ss2;
    return 0; 
}