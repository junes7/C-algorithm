// 실수 한 개 입력받아 부분별로 출력하기
// print one input real number
// 실수 한 개를 입력받아 정수 부분과 실수 부분으로 나누어 출력한다.
// ** 여러 가지 방법들로 해결할 수 있다.
// 만약 실수 부분이 0으로 시작하지 않는다면(예를 들어 1.000009)
// scanf("%d.%d", &a, &b)도 하나의 방법이 될 수 있다.
# include <iostream>
using namespace std;
int main() {
    int a,b;
    scanf("%d.%d",&a,&b);
    cout<<a<<"\n"<<b;
    return 0;
}