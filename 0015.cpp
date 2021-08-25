// 실수 입력받아  출력하기
// print real number until two decimal places
// 실수(float) 한 개를 입력받아 저장한 후, 저장되어 있는 값을 소수점
// 셋 째 자리에서 반올림하여 소수점 이하 둘 째 자리까지 출력하시오.
# include <iostream>
using namespace std;
int main() {
    float x;
    cin>>x;
    cout<<fixed;
    cout.precision(2);
    cout<<x;
    return 0;
}