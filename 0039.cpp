// 정수 한 개 입력받아 부호 바꿔 출력하기
// print one input integer after change sign
// 입력된 정수의 부호를 바꿔 출력해보자.
// 단, -2147483647 ~ +2147483647 범위의 정수가 입력된다.
// method 1
// # include <iostream>
// int main() {
//     int a;
//     scanf("%d",&a);
//     printf("%d",-a);
//     return 0;
// }
// method 2
# include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    cout<<-a;
    return 0;
}