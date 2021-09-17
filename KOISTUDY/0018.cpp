// 연월일 입력받아 그대로 출력하기
// print year,month,day originally
// 년, 월, 일을 입력받아 지정된 형식으로 출력하는 연습을 해보자.
# include <iostream>
using namespace std;
int main() {
    int y,m,d;
    scanf("%d.%d.%d",&y,&m,&d);
    cout.width(4);
    cout.fill('0');
    cout<<y<<'.';
    cout.width(2);
    cout.fill('0');
    cout<<m<<'.';
    cout.width(2);
    cout.fill('0');
    cout<<d;
    return 0;
}