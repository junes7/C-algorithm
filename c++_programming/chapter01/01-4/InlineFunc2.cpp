# include <iostream>
using namespace std;
// ���ø��̶�� ���� �̿��ϸ� �ڷ����� ���������� ���� �Լ��� �ȴ�.
template <typename T>
inline T SQUARE(T x){
    return x*x;
}
int main(){
    cout<<SQUARE(5.5)<<endl;
    cout<<SQUARE(12)<<endl;
}