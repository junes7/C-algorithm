#include<iostream>
using namespace std;
class Calculator{
private:
    int addCnt;
    int minCnt;
    int mulCnt;
    int divCnt;
public:
    void Init();
    double Add(double x,double y);
    double Min(double x,double y);
    double Mul(double x,double y);
    double Div(double x,double y);
    void ShowOpCount();
};
void Calculator::Init(){
    addCnt=0;
    minCnt=0;
    mulCnt=0;
    divCnt=0;
}
double Calculator::Add(double x,double y){
    addCnt++;
    return x+y;
}
double Calculator::Min(double x,double y){
    minCnt++;
    return x-y;
}
double Calculator::Mul(double x,double y){
    mulCnt++;
    return x*y;
}
double Calculator::Div(double x,double y){
    divCnt++;
    return x/y;
}
void Calculator::ShowOpCount(){
    cout<<"µ¡¼À: "<<addCnt<<" »¬¼À: "<<minCnt<<" °ö¼À: "<<mulCnt<<" ³ª´°¼À: "<<divCnt<<endl;
}
int main(void){
    Calculator cal;
    cal.Init();
    cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
    cout<<"3.5 / 1.7 = "<<cal.Div(3.5, 1.7)<<endl;
    cout<<"2.2 - 1.5 = "<<cal.Min(2.2, 1.5)<<endl;
    cout<<"4.9 / 1.2 = "<<cal.Div(4.9, 1.2)<<endl;
    cal.ShowOpCount();
}