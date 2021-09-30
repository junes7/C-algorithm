#include<iostream>
using namespace std;
class Rectangle{
private:
    int width,height;
public:
    Rectangle(int x,int y):width(x),height(y){}
    void ShowAreaInfo() const{
        cout<<"¸éÀû: "<<width*height<<endl;
    }
};
class Square:public Rectangle{
public:
    Square(int d):Rectangle(d,d){}
};
int main(void){
    Rectangle rec(4, 3);
    rec.ShowAreaInfo();
    Square sqr(7);
    sqr.ShowAreaInfo();
}