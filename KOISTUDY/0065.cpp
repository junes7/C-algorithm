// 정수 세 개 입력받아 짝/홀 출력하기
// print even/odd of three integers
// 세 정수 a, b, c가 입력되었을 때, 짝(even)/홀(odd)을 출력해보자.
# include <iostream>
int main() {
    int i,d[3];
    scanf("%d %d %d",&d[0],&d[1],&d[2]);
    for(i=0;i<3;i++)
        printf("%s\n",d[i]%2==0?"even":"odd");
}