#include<iostream>
#include<cstring>
using namespace std;
class MyFriendInfo{
private:
    char *name;
    int age;
public:
    MyFriendInfo(char *myname,int myage):age(myage){
        name=new char[strlen(myname)+1];
        strcpy(name,myname);
    }
    void ShowMyFriendInfo(){
        cout<<"이름: "<<name<<endl;
        cout<<"나이: "<<age<<endl;
    }
    ~MyFriendInfo(){
        delete []name;
    }
};
class MyFriendDetailInfo:public MyFriendInfo{
private:
    char *addr;
    char *phone;
public:
    MyFriendDetailInfo(char *myname,int myage,char *myaddr,char *myphone):MyFriendInfo(myname,myage){
        addr=new char[strlen(myaddr)+1];
        phone=new char[strlen(myphone)+1];
        strcpy(addr,myaddr);
        strcpy(phone,myphone);
    }
    void ShowMyFriendDetailInfo(){
        ShowMyFriendInfo();
        cout<<"주소: "<<addr<<endl;
        cout<<"전화: "<<phone<<endl<<endl;
    }
    ~MyFriendDetailInfo(){
        delete []addr;
        delete []phone;
    }
};
int main(void){
    MyFriendDetailInfo fren1("김진성",22,"충남 아산","010-1234-5678");
    MyFriendDetailInfo fren2("이주성",19,"경기 이천","010-3333-5678");
    fren1.ShowMyFriendDetailInfo();
    fren2.ShowMyFriendDetailInfo();
}