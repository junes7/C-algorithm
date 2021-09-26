#include<iostream>
#include<cstring>
using namespace std;
class Person{
private:
    char *name;
    int age;
public:
    Person(char *myname,int myage):age(myage){
        name=new char[strlen(myname)+1];
        strcpy(name,myname);
    }
    Person(){
        name=NULL;
        age=0;
        cout<<"called Person()"<<endl;
    }
    void ShowPersonInfo(){
        cout<<"�̸�: "<<name<<", "<<"����: "<<age<<endl;
    }
    ~Person(){
        delete []name;
        cout<<"called destructor!"<<endl;
    }
};
int main(void){
    Person *parr[3];
    char name[20];
    int i,age;
    for(i=0;i<3;i++){
        cout<<"�̸�: ";
        cin>>name;
        cout<<"����: ";
        cin>>age;
        parr[i]=new Person(name,age);
    }
    for(i=0;i<3;i++)
        parr[i]->ShowPersonInfo();
    for(i=0;i<3;i++){
        delete parr[i];
    }
}