# include <iostream>
using namespace std;
int Adder(int n1=1,int n2=2){
    return n1+n2;
}
int main(void){
    cout<<Adder()<<endl;
    cout<<Adder(5)<<endl;
    cout<<Adder(3, 5)<<endl;
}