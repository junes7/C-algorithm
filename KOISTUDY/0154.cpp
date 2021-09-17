// 피보나치 수열 (Small)
// fibonacci sequence
// 피보나치 수는 다음과 같이 정의된다.
// f1 = 1, f2 = 1
// fn = fn-1 + fn-2 ( n > 2 )
// 한 정수를 입력받아서 fn을 구하는 프로그램을 작성하시오.
// 단 재귀함수로 작성하시오.
# include <iostream>
int n,d[21]={};
int f(int n){
    if(n<=2){
        d[n]=1;
        return d[n];
    }else if(d[n]!=0)
        return d[n];
    else{
        d[n]=f(n-1)+f(n-2);
        return d[n];
    }
}
int main(){
    scanf("%d",&n);
    printf("%d",f(n));
}