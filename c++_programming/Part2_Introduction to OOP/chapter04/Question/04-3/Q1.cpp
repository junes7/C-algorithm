#include<iostream>
using namespace std;
class Point{
private:
    int xpos,ypos;
public:
    Point(int x,int y):xpos(x),ypos(y){}
    void ShowPointInfo(){
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
};
class Circle{
private:
    Point center;
    int radius;
public:
    Circle(int x,int y,int r):center(x,y),radius(r){}
    void ShowCircleInfo(){
        cout<<"radius: "<<radius<<endl;
        center.ShowPointInfo();
    }
};
class Ring{
private:
    Circle InnerCircle;
    Circle OuterCircle;
public:
    Ring(int x1,int y1,int r1,int x2,int y2,int r2):InnerCircle(x1,y1,r1),OuterCircle(x2,y2,r2){}
    void ShowRingInfo(){
        cout<<"Inner Circle Info..."<<endl;
        InnerCircle.ShowCircleInfo();
        cout<<"Outer Circle Info..."<<endl;
        OuterCircle.ShowCircleInfo();
    }
};
int main(void){
    Ring ring(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
}