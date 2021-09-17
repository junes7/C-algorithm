// 정수 한 개 입력받아 나누어 출력하기
// print one input integer separately
// 다섯 자리의 정수 한 개를 입력받아 각 자리별로 나누어 출력한다.
# include <iostream>
using namespace std;
int main() {
    int i,d[5]={},t=10000;
    for(i=0;i<5;i++){
        scanf("%1d",&d[i]);
    }
    for(i=0;i<5;i++){
        cout<<"["<<d[i]*t<<"]\n";
        t/=10;
    }
    return 0;
}