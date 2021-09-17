// 정수 한 개 입력받아 1 더해 출력하기
// print one input integer after add one
// 정수를 한 개 입력받아 1만큼 더해 출력해보자.
// 단, -2147483648 ~ +2147483647 의 범위로 입력된다.
// method 1
// # include <iostream>
// using namespace std;
// int main() {
//     long long int n;
//     cin>>n;
//     cout<<n+1;
//     return 0;
// }
// method 2
# include <iostream>
int main() {
    long long int n;
    scanf("%lld",&n);
    printf("%lld",n+1);
}