// num: 7
#include<iostream>
using namespace std;
class SoSimple{
private:
    int num;
public:
    SoSimple(int n):num(n){}
    SoSimple& AddNum(int n){
        num+=n;
        return *this;
    }
    void ShowData(){
        cout<<"num: "<<num<<endl;
    }
};
int main(void){
    SoSimple obj(7);
    // obj.AddNum(20);
    obj.ShowData();
}