// 구구단(multiplication table)
// 한 정수 N일 입력받아서 N단을 출력하는 프로그램을 작성하시오.
// ( 단 2 <= N <= 9 , 재귀함수로 작성하시오.)
# include <iostream>
void mul(int n,int i){
    if(i==10) return;
    else{
        printf("%d*%d=%d\n",n,i,n*i);
        return mul(n,i+1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    mul(n,1);
}