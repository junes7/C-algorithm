#include<iostream>
#include<cstring>
using namespace std;
class Employee{
private:
    char name[50];
public:
    Employee(char *myname){
        strcpy(name,myname);
    }
    void ShowYourName() const{
        cout<<"name: "<<name<<endl;
    }
};
class PermanentWorker:public Employee{
private:
    int salary;
public:
    PermanentWorker(char *name,int money):Employee(name),salary(money){}
    int GetPay() const{
        return salary;
    }
    void ShowSalaryInfo() const{
        ShowYourName();
        cout<<"salary: "<<GetPay()<<endl;
    }
};
class TemporaryWorker:public Employee{
private:
    int workTime;
    int payPerHour;
public:
    TemporaryWorker(char *name,int pay):Employee(name),workTime(0),payPerHour(pay){}
    void AddWorkTime(int time){
        workTime+=time;
    }
    int GetPay() const{
        return workTime*payPerHour;
    }
    void ShowSalaryInfo() const{
        ShowYourName();
        cout<<"salary: "<<GetPay()<<endl;
    }
};
class SalesWorker:public PermanentWorker{
private:
    int salesResult;
    double bonusRatio;
public:
    SalesWorker(char *name,int money,double ratio):PermanentWorker(name,money),salesResult(0),bonusRatio(ratio){}
    void AddSalesResult(int value){
        salesResult+=value;
    }
    int GetPay() const{
        return PermanentWorker::GetPay()+(int)(salesResult*bonusRatio);
    }
    void ShowSalaryInfo() const{
        ShowYourName();
        cout<<"salary: "<<GetPay()<<endl;
    }
};
class EmployeeHandler{
private:
    Employee *empList[50];
    int empNum;
public:
    EmployeeHandler():empNum(0){}
    void AddEmployee(Employee *emp){
        empList[empNum++]=emp;
    }
    void ShowAllSalaryInfo() const{
        // for(int i=0;i<empNum;i++)
        //     empList[i]->ShowSalaryInfo();
    }
    void ShowTotalSalary() const{
        int s=0;
        // for(int i=0;i<empNum;i++)
        //     s+=empList[i]->GetPay();
        cout<<"salary sum: "<<s<<endl;
    }
    ~EmployeeHandler(){
        for(int i=0;i<empNum;i++)
            delete empList[i];
    }
};
int main(void){
    // 직원관리를 목적으로 설계된 control class의 객체생성
    EmployeeHandler handler;
    // 정규직 등록
    handler.AddEmployee(new PermanentWorker("KIM",1000));
    handler.AddEmployee(new PermanentWorker("LEE",1500));
    // 임시직 등록
    TemporaryWorker *alba=new TemporaryWorker("Jung",700);
    alba->AddWorkTime(5);
    handler.AddEmployee(alba);
    // 영업직 등록
    SalesWorker *seller=new SalesWorker("Hong",1000,0.1);
    seller->AddSalesResult(7000);
    handler.AddEmployee(seller);
    // 이번 달에 지불해야 할 급여의 정보
    handler.ShowAllSalaryInfo();
    // 이번 달에 지불해야 할 급여의 총합
    handler.ShowTotalSalary();
}