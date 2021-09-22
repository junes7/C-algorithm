#include<iostream>
#include<cstring>
using namespace std;
int main(void){
    char str1[10]="ABC 123";
    char str2[10]="DEF 456";
    char str3[50];
    cout<<strlen(str1)<<endl;
    strcpy(str3,str1);
    cout<<str3<<endl;
    strcat(str3,str2);
    cout<<str3<<endl;
    if(strcmp(str1,str2)==0){
        cout<<"문자열이 같다."<<endl;
    }else{
        cout<<"문자열이 다르다."<<endl;
    }


}