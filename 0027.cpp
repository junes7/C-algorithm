// 정수 한 개 입력받아 그대로 출력하기 2
// print one input integer
// 정수 한 개를 입력받아 그대로 출력해보자. (단, 입력되는 정수의
// 범위는 0 ~ 4,294,967,295 이다.)
// method 1
// # include <iostream>
// using namespace std;
// int main() {
//     unsigned int n;
//     cin>>n;
//     cout<<n;
//     return 0;
// }
// method 2
# include <iostream>
int main() {
    unsigned int n;
    scanf("%u",&n);
    printf("%u",n);
}