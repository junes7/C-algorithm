#include<iostream>
using namespace std;
class SoSimple{
private:
    int num;
public:
    SoSimple(int n):num(n){}
    SoSimple(const SoSimple &copy):num(copy.num){
        cout<<"Called SoSimple(const SoSimple &copy)"<<endl;
    }
    void ShowData(){
        cout<<"num: "<<num<<endl;
    }
};
void SimpleFuncObj(SoSimple obj){
    obj.ShowData();
}
int main(void){
    SoSimple obj(7);
    cout<<"�Լ�ȣ�� ��"<<endl;
    SimpleFuncObj(obj);
    cout<<"�Լ�ȣ�� ��"<<endl;
}