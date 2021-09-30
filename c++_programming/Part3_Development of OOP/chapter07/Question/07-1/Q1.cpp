#include<iostream>
using namespace std;
// 기본 연료 자동차
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
        cout<<"잔여 가솔린: "<<GetGasGauge()<<endl;
        cout<<"잔여 전기량: "<<GetElecGauge()<<endl;
        cout<<"잔여 워터량: "<<waterGauge<<endl;
    }
};
int main(void){
    HybridWaterCar hwc(79,65,35);
    hwc.ShowCurrentGauge();
}
