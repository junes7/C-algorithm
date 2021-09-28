#include<iostream>
#include"Point.h"
using namespace std;
Point::Point(const int &xpos,const int &ypos){
    x=xpos;
    y=ypos;
}
int Point::GetX() const{
    return x;
}
int Point::GetY() const{
    return y;
}
bool Point::SetX(const int &xpos){
    if(xpos<0||xpos>100){
        cout<<"��� ������ �� ����"<<endl;
        return false;
    }
    x=xpos;
    return true;
}
bool Point::SetY(const int &ypos){
    if(ypos<0||ypos>100){
        cout<<"��� ������ �� ����"<<endl;
        return false;
    }
    y=ypos;
    return true;
}