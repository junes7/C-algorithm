#include"Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle(const int &x1,const int &y1,const int &x2,const int &y2):upleft(x1, y1),lowright(x2, y2){
    upleft.SetX(x1);
    upleft.SetY(y1);
    lowright.SetX(x2);
    lowright.SetY(y2);
}
void Rectangle::ShowRecInfo() const{
    cout<<"좌 상단: ["<<upleft.GetX()<<", "<<upleft.GetY()<<"]"<<endl;
    cout<<"우 하단: ["<<lowright.GetX()<<", "<<lowright.GetY()<<"]"<<endl;
}