# include <iostream>
using namespace std;
int main(){
    int i,v1,v2,r=0;
    cout<<"�� ���� �����Է�: ";
    cin>>v1>>v2;
    if(v1<v2)
        for(i=v1+1;i<v2;i++)
            r+=i;
    else
        for(i=v2+1;i<v1;i++)
            r+=i;
    cout<<"�� �� ������ ���� ��: "<<r<<endl;
}