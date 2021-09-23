#include<iostream>
#include<cstring>
using namespace std;
class Printer{
private:
    char pstr[30];
public:
    void SetString(char *str);
    void ShowString();
};
void Printer::SetString(char *str){
    strcpy(pstr,str);
}
void Printer::ShowString(){
    cout<<pstr<<endl;
}
int main(void){
    Printer pnt;
    pnt.SetString("Hello World!");
    pnt.ShowString();
    pnt.SetString("I love C++");
    pnt.ShowString();
}