// 정수 세 개 입력받아 짝수만 출력하기
// print even number of three integers
// 세 정수 a, b, c가 입력되었을 때, 짝수만 출력해보자.
# include <iostream>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a%2==0)
        printf("%d\n",a);
    if(b%2==0)
        printf("%d\n",b);
    if(c%2==0)
        printf("%d",c);
    return 0;
}