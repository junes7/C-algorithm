// 정수 한 개 입력받아 분석하기
// analyze one input integer
// 정수 한 개가 입력되었을 때, 음(minus)/양(plus)과
// 짝(even)/홀(odd)을 출력해보자.
# include <iostream>
int main() {
    int a;
    scanf("%d",&a);
    printf("%s\n%s",a<0?"minus":"plus",a%2==0?"even":"odd");
}