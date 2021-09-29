#include<iostream>
#include<cstring>
using namespace std;
class PermanentWorker{
private:
    char name[100];
    int salary;
public:
    PermanentWorker(char *_name,int money):salary(money){
        strcpy(this->name,_name);
    }
    int GetPay() const{
        return salary;
    }
    void ShowSalaryInfo() const{
        cout<<"name: "<<name<<endl;
        cout<<"salary: "<<salary<<endl<<endl;
    }
};
class EmployeeHandler{
private:
    PermanentWorker* empList[50];
    int empNum;
public:
    EmployeeHandler():empNum(0){}
    void AddEmployee(PermanentWorker* emp){
        empList[empNum++]=emp;
    }
    void ShowAllSalaryInfo() const{
        for(int i=0;i<empNum;i++)
            empList[i]->ShowSalaryInfo();
    }
    void ShowTotalSalary() const{
        int s=0;
        for(int i=0;i<empNum;i++)
            s+=empList[i]->GetPay();
        cout<<"salary sum: "<<s<<endl;
    }
    ~EmployeeHandler(){
        for(int i=0;i<empNum;i++)
            delete empList[i];
    }
};
int main(void){
    EmployeeHandler handler;
    handler.AddEmployee(new PermanentWorker("KIM",1000));
    handler.AddEmployee(new PermanentWorker("LEE",1500));
    handler.AddEmployee(new PermanentWorker("JUN",2000));
    handler.ShowAllSalaryInfo();
    handler.ShowTotalSalary();
}