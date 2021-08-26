// 시간 입력받아 그대로 출력하기
// print time orginally
// 어떤 형식에 맞추어 시간이 입력될 때, 그대로 출력하는 연습을 해보자.
# include <iostream>
# include <string.h>
using namespace std;
int main() {
    string s,h,m;
    int i,ho,mi;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]==':'){
            h=s.substr(0,i);
            break;
        }
    }
    m=s.substr(i+1);
    ho=atoi(h.c_str());
    mi=atoi(m.c_str());
    cout<<ho<<":";
    cout.width(2);
    cout.fill('0');
    cout<<mi<<endl;
    return 0;
}