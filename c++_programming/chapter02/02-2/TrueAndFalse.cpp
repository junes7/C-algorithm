# include <iostream>
using namespace std;
int main(){
    int n=10,i;
    cout<<"true: "<<true<<endl;
    cout<<"false: "<<false<<endl;
    for(i=0;;i++){
        if(i>n) break;
        cout<<i<<' ';
    }
    cout<<endl;
    cout<<"sizeof 1: "<<sizeof(1)<<endl;
    cout<<"sizeof 0: "<<sizeof(0)<<endl;
    cout<<"sizeof true: "<<sizeof(true)<<endl;
    cout<<"sizeof false: "<<sizeof(false)<<endl;
}