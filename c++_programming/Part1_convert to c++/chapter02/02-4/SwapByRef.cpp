# include <iostream>
using namespace std;
void SwapByRef(int *p1,int *p2){
    int t=*p1;
    *p1=*p2;
    *p2=t;
}
int main(void){
    int n1=10,n2=20;
    SwapByRef(&n1,&n2);
    cout<<"val1: "<<n1<<endl;
    cout<<"val2: "<<n2<<endl;
}