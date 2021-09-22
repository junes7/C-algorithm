# include <iostream>
using namespace std;
int main(void){
    int n=12;
    int *ptr=&n;
    int **dptr=&ptr;
    int &ref=n;
    int *(&pref)=ptr;
    int **(&dpref)=dptr;
    cout<<ref<<endl;
    cout<<*pref<<endl;
    cout<<**dpref<<endl;
}