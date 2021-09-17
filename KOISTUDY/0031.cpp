// 10진 정수 입력받아 16진수로 출력하기
// print one input decimal number as hexadecimal number
// 10진수를 입력받아 16진수(hexadecimal) 소문자로 출력해보자.
// method 1
// # include <iostream>
// int main() {
//     int n;
//     scanf("%d",&n);
//     printf("%x",n);
//     return 0;
// }
// method 2
# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<hex<<n;
    return 0;
}