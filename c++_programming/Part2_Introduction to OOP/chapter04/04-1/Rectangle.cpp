#include<iostream>
#include"Point.h"
#include"Rectangle.h"
using namespace std;
bool Rectangle::InitMembers(const Point &ul,const Point &lr){
    if(ul.GetX()>lr.GetX()||ul.GetY()>lr.GetY()){
        cout<<"��� ������ �� ����"<<endl;
        return false;
    }
    upleft=ul;
    lowright=lr;
    return true;
}
void Rectangle::ShowRecInfo(){
    cout<<"�� ���: ["<<upleft.GetX()<<", "<<upleft.GetY()<<"]"<<endl;
    cout<<"�� �ϴ�: ["<<lowright.GetX()<<", "<<lowright.GetY()<<"]"<<endl;
}