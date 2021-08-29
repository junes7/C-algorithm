// 참 거짓 바꾸기
// change true and false
// 1(true, 참) 또는 0(false, 거짓) 이 입력되었을 때 반대로
// 출력하는 프로그램을 작성해보자.
// method 1
// # include <iostream>
// using namespace std;
// int main() {
//     int a;
//     cin>>a;
//     cout<<!a;
// }
// method 2
# include <iostream>
int main() {
    int a;
    scanf("%d",&a);
    printf("%d",!a);
}