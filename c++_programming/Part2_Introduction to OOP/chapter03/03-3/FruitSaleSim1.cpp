#include<iostream>
using namespace std;
class FruitSeller{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    void InitMembers(int price,int num,int money){
        APPLE_PRICE=price;
        numOfApples=num;
        myMoney=money;
    }
    int SalesApples(int money){
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
    void InitMembers(int money){
        myMoney=money;
        numOfApples=0;
    }
    void BuyApples(FruitSeller &seller,int money){
        numOfApples+=seller.SalesApples(money);
        myMoney-=money;
    }
    void ShowBuyResult(){
        cout<<"���� �������� ��Ȳ"<<endl;
        cout<<"���� �ܾ�: "<<myMoney<<endl;
        cout<<"��� ����: "<<numOfApples<<endl<<endl;
    }
};
int main(void){
    FruitSeller seller;
    seller.InitMembers(1000,20,0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller,2000);
    seller.ShowSalesResult();
    buyer.ShowBuyResult();
}