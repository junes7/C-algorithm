#include"Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle(const int &x1,const int &y1,const int &x2,const int &y2):upleft(x1, y1),lowright(x2, y2){
    //empty
}
void Rectangle::ShowRecInfo() const{
    cout<<"�� ���: ["<<upleft.GetX()<<", "<<upleft.GetY()<<"]"<<endl;
    cout<<"�� �ϴ�: ["<<lowright.GetX()<<", "<<lowright.GetY()<<"]"<<endl;
}