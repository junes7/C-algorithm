// ring information problem
#include<iostream>
using namespace std;
class Point{
private:
    int xpos,ypos;
public:
    void Init(int x,int y){
        xpos=x;
        ypos=y;
    }
    void ShowPointInfo() const{
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
};
class Circle{
private:
    Point pnt;
    int radius;
public:
    void Init(int x,int y,int r){
        pnt.Init(x,y);
        radius=r;
    }
    void ShowCircleInfo() const{
        cout<<"radius: "<<radius<<endl;
        pnt.ShowPointInfo();
    }
};
class Ring{
private:
    Circle InnerCircle;
    Circle OutterCircle;
public:
    void Init(int x1,int y1,int r1,int x2,int y2,int r2){
        InnerCircle.Init(x1,y1,r1);
        OutterCircle.Init(x2,y2,r2);
    }
    void ShowRingInfo() const{
        cout<<"Inner Circle Info..."<<endl;
        InnerCircle.ShowCircleInfo();
        cout<<"Outter Circle Info..."<<endl;
        OutterCircle.ShowCircleInfo();
    }
};
int main(void){
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
}