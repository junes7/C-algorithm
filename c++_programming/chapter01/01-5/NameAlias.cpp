# include <iostream>
using namespace std;
namespace AAA{
    namespace BBB{
        namespace CCC{
            int n1;
            int n2;
        }
    }
}
int main(void){
    AAA::BBB::CCC::n1=20;
    AAA::BBB::CCC::n2=30;
    namespace ABC=AAA::BBB::CCC;
    cout<<ABC::n1<<endl;
    cout<<ABC::n2<<endl;
}