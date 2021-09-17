// 실수 한 개 입력받아 그대로 출력하기 2
// print one input real number
// 실수 한 개를 입력받아 그대로 출력해보자. (단, 입력되는 실수의
// 범위는 +- 1.7*10^(-308) ~ +- 1.7*10^(308) 이다.)
// 입력된 실수를 소수점 이하 11자리까지 반올림하여 출력한다.
// %.11lf 를 사용하면 소수점 이하 11자리까지 출력된다.
# include <iostream>
using namespace std;
int main() {
    double d;
    cin>>d;
    printf("%.11lf",d);
    return 0;
}