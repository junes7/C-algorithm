// 8진 정수 한 개 입력받아 10진수로 출력하기
// print one octal number as decimal number
// 8진수로 입력된 정수 1개를 10진수로 바꾸어 출력해보자.
// method 1
// # include <iostream>
// int main() {
//     int n;
//     scanf("%o",&n);
//     printf("%d",n);
// }
// method 2
# include <iostream>
using namespace std;
int main() {
    long long int n,t=1,r=0;
    cin>>n;
    while(n!=0){
        r+=n%10*t;
        t*=8;
        n/=10;
    }
    cout<<r;
    return 0;
}