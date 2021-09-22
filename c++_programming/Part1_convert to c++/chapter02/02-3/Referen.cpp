// VAL: 3047
// REF: 3047
// VAL: 0x61ff08
// REF: 0x61ff08
# include <iostream>
using namespace std;
int main(void){
    int n1=1020,&n2=n1;
    n2=3047;
    cout<<"VAL: "<<n1<<endl;
    cout<<"REF: "<<n2<<endl;
    cout<<"VAL: "<<&n1<<endl;
    cout<<"REF: "<<&n2<<endl;
}