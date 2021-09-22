// 다음 main 함수에서 필요로 하는 swap 함수를 오버로딩해서 구현해보자.
# include <iostream>
using namespace std;
void swap(int *n1,int *n2){
    int t=*n1;
    *n1=*n2;
    *n2=t;
}
void swap(char *ch1,char *ch2){
    char ch=*ch1;
    *ch1=*ch2;
    *ch2=ch;
}
void swap(double *dbl1,double *dbl2){
    double dbl=*dbl1;
    *dbl1=*dbl2;
    *dbl2=dbl;
}
int main(void){
    int n1=20,n2=30;
    swap(&n1,&n2);
    cout<<n1<<' '<<n2<<endl;
    char ch1='A',ch2='Z';
    swap(&ch1,&ch2);
    cout<<ch1<<' '<<ch2<<endl;
    double dbl1=1.111,dbl2=5.555;
    swap(&dbl1,&dbl2);
    cout<<dbl1<<' '<<dbl2<<endl;
}