# include <iostream>
using namespace std;
// 템플릿이라는 것을 이용하면 자료형에 의존적이지 않은 함수가 된다.
template <typename T>
inline T SQUARE(T x){
    return x*x;
}
int main(){
    cout<<SQUARE(5.5)<<endl;
    cout<<SQUARE(12)<<endl;
}