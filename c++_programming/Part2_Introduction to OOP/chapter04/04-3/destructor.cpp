#include<iostream>
#include<cstring>
using namespace std;
class Person{
private:
    char *name;
    int age;
public:
    Person(char *myName,int myAge){
        int len=strlen(myName)+1;
        name=new char[len];
        strcpy(name,myName);
        age=myAge;
    }
    void ShowPersonInfo(){
        cout<<"�̸�: "<<name<<endl;
        cout<<"����: "<<age<<endl;
    }
    ~Person(){
        delete []name;
        cout<<"called destructor!"<<endl;
    }
};
int main(void){
    Person man1("Lee dong woo",29);
    Person man2("Jang dong gun",41);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
}