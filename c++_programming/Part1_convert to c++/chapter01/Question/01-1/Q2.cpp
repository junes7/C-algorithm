// 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력
// 받아서, 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해
// 보자.
# include <iostream>
using namespace std;
int main(){
    char name[50];
    char phone[100];
    cout<<"이름: ";
    cin>>name;
    cout<<"전화번호: ";
    cin>>phone;
    cout<<"당신의 이름: "<<name<<endl;
    cout<<"당신의 전화번호: "<<phone<<endl;
}