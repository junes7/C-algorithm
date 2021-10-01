#include<iostream>
#include<cstring>
using namespace std;
class Employee{
private:
    char name[50];
public:
    Employee(char *_name){
        strcpy(name,_name);
    }
    void ShowYourName() const{
        cout<<"name: "<<name<<endl;
    }
};
class Permanentwork:public Employee{
private:
    int salary;
public:
    Permanentwork(char *_name,int money):Employee(_name),salary(money){}
    int GetPay(){
        return salary;
    }
    void ShowSalaryInfo(){
        cout<<"salary: "<<salary<<endl;
    }
};
class EmployeeHandler{
private:
    Employee *empList[50];
    int empNum;
public:
    EmployeeHandler():empNum(0){ }
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
};
int main(void){
    // 직원관리를 목적으로 컨트롤 클래스의 객체 생성
    EmployeeHandler handler;
    handler.AddEmployee(new Permanentwork("KIM",1000));
    handler.AddEmployee(new Permanentwork("LEE",1500));
    handler.AddEmployee(new Permanentwork("JUN",2000));
    // 이번 달에 지불해야 할 급여의 정보
    handler.ShowAllSalaryInfo();
    // 이번 달에 지불해야 할 급여의 총합
    handler.ShowTotalSalary();
}

