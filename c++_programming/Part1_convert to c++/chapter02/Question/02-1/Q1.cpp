// ������(reference)�� �̿��ؼ� ���� �䱸���׿� �����ϴ� �Լ��� ����
// �����Ͽ���.
// *���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
// *���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ�
# include <iostream>
using namespace std;
void IncreOne(int &n){
    n++;
}
void InverSign(int &n){
    n=-n;
}
int main(void){
    int n=20;
    IncreOne(n);
    cout<<"val: "<<n<<endl;
    InverSign(n);
    cout<<"val: "<<n<<endl;
}