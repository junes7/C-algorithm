// 10진 정수 한 개 입력받아 8진수로 출력하기
// print one input decimal number as octal nubmer
// 10진수를 입력받아 8진수(octal)로 출력해보자.
// method 1
// # include <iostream>
// using namespace std;
// int main() {
//     long long int n,t=1,r=0;
//     cin>>n;
//     while(n!=0){
//         r+=n%8*t;
//         t*=10;
//         n/=8;
//     }
//     cout<<r;
//     return 0;
// }
// method 2
# include <iostream>
int main() {
    int n;
    scanf("%d",&n);
    printf("%o",n);
    return 0;
}