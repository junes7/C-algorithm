#include<iostream>
#include<cstring>
using namespace std;
class Computer{
private:
    char owner[50];
public:
    Computer(char *name){
        strcpy(owner,name);
    }
    void Calcuate(){
        cout<<"��û ������ ����մϴ�."<<endl;
    }
};
class NotebookComp:public Computer{
private:
    int Battery;
public:
    NotebookComp(char *name,int initChag):Computer(name),Battery(initChag){}
    void Charging(){Battery+=5;}
    void UseBattery(){Battery-=1;}
    void MovingCal(){
        if(GetBatteryInfo()<1){
            cout<<"������ �ʿ��մϴ�."<<endl;
            return;
        }
        cout<<"�̵��ϸ鼭 ";
        Calcuate();
        UseBattery();
    }
    int GetBatteryInfo(){return Battery;}
};
class TabletNotebook:public NotebookComp{
private:
    char regisPenModel[50];
public:
    TabletNotebook(char *name,int initChag,char *pen):NotebookComp(name,initChag){
        strcpy(regisPenModel,pen);
    }
    void Write(char *penInfo){
        if(GetBatteryInfo()<1){
            cout<<"������ �ʿ��մϴ�."<<endl;
            return;
        }
        if(strcmp(regisPenModel,penInfo)!=0){
            cout<<"��ϵ� ���� �ƴմϴ�."<<endl;
            return;
        }
        cout<<"�ʱ� ������ ó���մϴ�."<<endl;
        UseBattery();
    }
};
int main(void){
    NotebookComp nc("�̼���",5);
    TabletNotebook tn("������",5,"ISE-241-242");
    nc.MovingCal();
    tn.Write("ISE-241-242");
}