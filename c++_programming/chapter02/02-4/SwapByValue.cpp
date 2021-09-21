# include <iostream>
using namespace std;
void SwapByValue(int n1,int n2){
    int t=n1;
    n1=n2;
    n2=t;
    cout<<"func val1: "<<n1<<endl;
    cout<<"func val2: "<<n2<<endl;
}
int main(void){
    int n1=10,n2=20;
    SwapByValue(n1,n2);
    cout<<"val1: "<<n1<<endl;
    cout<<"val2: "<<n2<<endl;
}