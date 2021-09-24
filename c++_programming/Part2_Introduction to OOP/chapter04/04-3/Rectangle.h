#include"Point.h"
#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
class Rectangle{
private:
    Point upleft;
    Point lowright;
public:
    Rectangle(const int &x1,const int &y1,const int &x2,const int &y2);
    void ShowRecInfo() const;
};
#endif