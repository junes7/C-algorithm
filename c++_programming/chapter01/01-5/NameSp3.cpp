// BestCom�� ������ �Լ�
// So Pretty!!
// ProgCom�� ������ �Լ�
# include <iostream>
using namespace std;
namespace BestComImpl{
    void SimpleFunc(void);
}
namespace BestComImpl{
    void PrettyFunc(void);
}
namespace ProgComImpl{
    void SimpleFunc(void);
}
int main(){
    BestComImpl::SimpleFunc();
}
void BestComImpl::SimpleFunc(void){
    cout<<"BestCom�� ������ �Լ�"<<endl;
    PrettyFunc();
    ProgComImpl::SimpleFunc();
}
void BestComImpl::PrettyFunc(void){
    cout<<"So Pretty!!"<<endl;
}
void ProgComImpl::SimpleFunc(void){
    cout<<"ProgCom�� ������ �Լ�"<<endl;
}