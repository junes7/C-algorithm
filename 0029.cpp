// 정수 한 개 입력받아 그대로 출력하기
// print one input integer
// 정수 한 개를 입력받아 그대로 출력해보자. 단, 입력되는 정수의
// 범위는 –9,223,372,036,854,775,808 ~
//  +9,223,372,036,854,775,807이다.
// method 1
// # include <iostream>
// using namespace std;
// int main() {
//     long long int n;
//     cin>>n;
//     cout<<n;
//     return 0;
// }
// method 2
# include <iostream>
int main() {
    long long int n;
    scanf("%lld",&n);
    printf("%lld",n);
    return 0;
}