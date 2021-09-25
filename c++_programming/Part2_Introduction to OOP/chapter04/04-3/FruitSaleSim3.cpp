// ��� �̴ϼȶ�����(Member Initializer)�� �̿��� ���� �� const �ʱ�ȭ
// Initialize variables with member Initializer and constants with const 
#include<iostream>
using namespace std;
class FruitSeller{
private:
    const int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    FruitSeller(int price,int num,int money):APPLE_PRICE(price),numOfApples(num),myMoney(money){}
    int SaleApples(int money){
        if(money<0){
            cout<<"�߸��� ������ ���޵Ǿ� �ǸŸ� ����մϴ�."<<endl;
            return 0;
        }
        int num=money/APPLE_PRICE;
        numOfApples-=num;
        myMoney+=money;
        return num;
    }
    void ShowSalesResult(){
        cout<<"���� �Ǹ����� ��Ȳ"<<endl;
        cout<<"���� ���: "<<numOfApples<<endl;
        cout<<"�Ǹ� ����: "<<myMoney<<endl<<endl;
    }
};
class FruitBuyer{
private:
    int myMoney;
    int numOfApples;
public:
    FruitBuyer(int money):myMoney(money),numOfApples(0){}
    void BuyApples(FruitSeller &seller,int money){
        if(money<0){
            cout<<"�߸��� ������ ���޵Ǿ� ���Ÿ� ����մϴ�."<<endl;
        }
        numOfApples+=seller.SaleApples(money);
        myMoney-=money;
    }
    void ShowBuyResult(){
        cout<<"���� �������� ��Ȳ"<<endl;
        cout<<"���� �ܾ�: "<<myMoney<<endl;
        cout<<"��� ����: "<<numOfApples<<endl;
    }
};
int main(void){
    FruitSeller seller(1000,20,0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller,2000);
    seller.ShowSalesResult();
    buyer.ShowBuyResult();
}