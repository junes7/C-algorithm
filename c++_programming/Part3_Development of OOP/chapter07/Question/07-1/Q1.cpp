#include<iostream>
using namespace std;
// �⺻ ���� �ڵ���
class Car{
private:
    int gasolineGauge;
public:
    Car(int gasGauge):gasolineGauge(gasGauge){}
    int GetGasGauge(){
        return gasolineGauge;
    }
};
class HybridCar:public Car{
private:
    int electricGauge;
public:
    HybridCar(int gas,int elecGauge):Car(gas),electricGauge(elecGauge){}
    int GetElecGauge(){
        return electricGauge;
    }
};
class HybridWaterCar:public HybridCar{
private:
    int waterGauge;
public:
    HybridWaterCar(int gas,int elec,int water):HybridCar(gas,elec),waterGauge(water){}
    void ShowCurrentGauge(){
        cout<<"�ܿ� ���ָ�: "<<GetGasGauge()<<endl;
        cout<<"�ܿ� ���ⷮ: "<<GetElecGauge()<<endl;
        cout<<"�ܿ� ���ͷ�: "<<waterGauge<<endl;
    }
};
int main(void){
    HybridWaterCar hwc(79,65,35);
    hwc.ShowCurrentGauge();
}
