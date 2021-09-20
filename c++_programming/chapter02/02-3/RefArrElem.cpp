# include <iostream>
using namespace std;
int main(void){
    int d[3]={1, 3, 5};
    int &ref1=d[0];
    int &ref2=d[1];
    int &ref3=d[2];
    cout<<ref1<<endl;
    cout<<ref2<<endl;
    cout<<ref3<<endl;
}