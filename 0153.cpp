// Number Reverse (NTTP)
// 입력되는 정수를 뒤집어서 출력하는 프로그램을 작성하시오.
// (재귀함수로 작성하시오.)
# include <iostream>
int rev(int n,int t){
    return n==0?t:rev(n/10,t*10+n%10);
}
int main(){
    int n,t=0;
    scanf("%d",&n);
    printf("%d",rev(n,0));
}