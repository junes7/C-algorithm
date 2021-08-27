// 년월일 입력 받아 형식 바꿔 출력하기
// print input year,month,day
// 년월일을 출력하는 방법은 나라마다, 형식마다 조금씩 다르다.
// 년월일(yyyy.mm.dd)를 입력받아, 일월년(dd-mm-yyyy)로 출력해보자.
// (단, 한 자리 일/월은 0을 붙여 두자리로, 년도도 0을 붙여 네자리로
// 출력한다.)
// method 1
// # include <iostream>
// using namespace std;
// int main() {
//     int y,m,d;
//     scanf("%d.%d.%d",&y,&m,&d);
//     printf("%02d-%02d-%04d",d,m,y);
//     return 0;
// }
// method 2
# include <iostream>
using namespace std;
int main() {
    int y,m,d;
    scanf("%d.%d.%d",&y,&m,&d);
    cout.width(2);
    cout.fill('0');
    cout<<d<<'-';
    cout.width(2);
    cout.fill('0');
    cout<<m<<'-';
    cout.width(4);
    cout.fill(0);
    cout<<y<<endl;
    return 0;
}