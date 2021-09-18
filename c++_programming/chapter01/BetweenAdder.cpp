# include <iostream>
using namespace std;
int main(){
    int i,v1,v2,r=0;
    cout<<"두 개의 숫자입력: ";
    cin>>v1>>v2;
    if(v1<v2)
        for(i=v1+1;i<v2;i++)
            r+=i;
    else
        for(i=v2+1;i<v1;i++)
            r+=i;
    cout<<"두 수 사이의 정수 합: "<<r<<endl;
}