// Is member function exist in object?
// ��ü �ȿ� ������ ����Լ��� �����ϴ°�?
#include<iostream>
using namespace std;
class Data{
private:
    int data;
public:
    Data(int num):data(num){}
    void ShowData(){cout<<"Data: "<<data<<endl;}
    void AddNum(int num){data+=num;}
};
int main(void){
    Data obj(15);
    obj.AddNum(17);
    obj.ShowData();
}