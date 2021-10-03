// �Ʒ��� ���� �����ϸ� �޸� ����(memory leak)�� �߻��Ѵ�.
#include<iostream>
#include<cstring>
using namespace std;
class First{
private:
    char *strOne;
public:
    First(char *ptr){
        strOne=new char[strlen(ptr)+1];
    }
    ~First(){
        cout<<"~First()"<<endl;
        delete []strOne;
    }
};
class Second:public First{
private:
    char *strTwo;
public:
    Second(char *ptr1,char *ptr2):First(ptr1){
        strTwo=new char[strlen(ptr2)+1];
    }
    ~Second(){
        cout<<"~Second()"<<endl;
        delete []strTwo;
    }
};
int main(void){
    First *ptr=new Second("simple","complex");
    delete ptr;
}