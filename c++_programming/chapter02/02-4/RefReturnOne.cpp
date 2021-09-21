# include <iostream>
using namespace std;
int& RefRetFuncOne(int &ref){
    ref++;
    return ref;
}
int main(void){
    int n1=1;
    int &n2=RefRetFuncOne(n1);
    n1++;
    n2++;
    cout<<"num1: "<<n1<<endl;
    cout<<"num2: "<<n2<<endl;
}