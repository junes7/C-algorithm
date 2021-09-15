// 팩토리얼 (Factorial)
// 1부터 n까지의 합을 구하는 방법을 점화관계로 해결할 수 있다는 점을
// 배운 승원이가 이번에는 n!를 계산하는 프로그램을 재귀함수로
// 작성하려고 한다.
# include <iostream>
long long int fa(int n){
    return n<=1?1:fa(n-1)*n;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lld",fa(n));
}