#include<iostream>
#include<cstring>
using namespace std;
class Gun{
private:
    int bullet;
public:
    Gun(int bnum):bullet(bnum){}
    void Shot(){
        cout<<"BBANG!"<<endl;
        bullet--;
    }
};
class Police{
private:
    int handcuffs;
    Gun *pistol;
public:
    Police(int bnum,int bcuff):handcuffs(bcuff){
        pistol=bnum>0?new Gun(bnum):NULL; 
    }
    void Shot(){
        if(pistol==NULL)
            cout<<"Hut BBANG!"<<endl;
        else
            pistol->Shot();
    }
    void PutHandCuff(){
        cout<<"SNAP!"<<endl;
        handcuffs--;
    }
    ~Police(){
        if(pistol!=NULL)
            delete pistol;
    }
};
int main(void){
    Police pman1(5, 3);
    pman1.Shot();
    pman1.PutHandCuff();
    Police pman2(0, 3);
    pman2.Shot();
    pman2.PutHandCuff();
}