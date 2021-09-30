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
        cout<<"�̸�: "<<name<<endl;
        cout<<"����: "<<age<<endl;
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
        cout<<"�ּ�: "<<addr<<endl;
        cout<<"��ȭ: "<<phone<<endl<<endl;
    }
    ~MyFriendDetailInfo(){
        delete []addr;
        delete []phone;
    }
};
int main(void){
    MyFriendDetailInfo fren1("������",22,"�泲 �ƻ�","010-1234-5678");
    MyFriendDetailInfo fren2("���ּ�",19,"��� ��õ","010-3333-5678");
    fren1.ShowMyFriendDetailInfo();
    fren2.ShowMyFriendDetailInfo();
}