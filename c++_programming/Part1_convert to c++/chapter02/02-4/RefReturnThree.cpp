# include <iostream>
using namespace std;
int RefRetFuncTwo(int &ref){
    ref++;
    return ref;
}
int main(void){
    int n1=1;
    int n2=RefRetFuncTwo(n1);
    n1+=1;
    n2+=100;
    cout<<"num1: "<<n1<<endl;
    cout<<"num2: "<<n2<<endl;
}