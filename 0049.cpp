// 두 정수 입력받아 비교하기 2
// comparison of two integers
// 두 정수(a, b)를 입력받아 a와 b가 같으면 1을, 같지 않으면 0을
// 출력하는 프로그램을 작성해보자.
// method 1
# include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    if(a==b) cout<<1;
    else cout<<0;
    return 0;
}
// method 2
// # include <iostream>
// int main() {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("%d",a==b?1:0);
//     return 0;
// }