# include <iostream>
using namespace std;
namespace BestComImpl{
    void SimpleFunc(void){
        cout<<"BestCom�� ������ �Լ�"<<endl;
    }
}
namespace ProgComImpl{
    void SimpleFunc(void){
        cout<<"ProgCom�� ������ �Լ�"<<endl;
    }
}
int main(void){
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
}