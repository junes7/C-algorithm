# include <iostream>
using namespace std;
bool IsPositive(int n){
    return n<0?false:true;
}
int main(void){
    bool IsPos;
    int n;
    cout<<"Input Number: ";
    cin>>n;
    IsPos=IsPositive(n);
    if(IsPos)
        cout<<"Positive Number"<<endl;
    else
        cout<<"Negative Number"<<endl;
}