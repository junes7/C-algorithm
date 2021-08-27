// 정수 두 개 입력받아 합 출력하기 2
// print sum of two integers
// 정수 2개를 입력받아 합을 출력해보자. 단, 입력되는 정수는
// -2147483648 ~ +2147483648 이다.
// method 1
// # include <iostream>
// using namespace std;
// int main() {
//     long long int a,b;
//     cin>>a>>b;
//     cout<<a+b;
// }
// method 2
# include <iostream>
int main() {
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",a+b);
    return 0;
}