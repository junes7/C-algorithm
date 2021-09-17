// 구구단 출력하기 기초
// print multiplication table basic
// 한 자연수 n을 입력받는다. n단을 주어진 양식에 맞추어 출력한다.
// 만약 입력되는 값이 5라면 다음과 같이 출력하면 된다.
// ======
// 5 Dan
// ======
// 5*1=5
// 5*2=10
// 5*3=15
// 5*4=20
// 5*5=25
// 5*6=30
// 5*7=35
// 5*8=40
// 5*9=45
// ======
# include <iostream>
int main(){
    int i,n;
    scanf("%d",&n);
    printf("======\n%d Dan\n======\n",n);
    for(i=1;i<10;i++)
        printf("%d*%d=%d\n",n,i,n*i);
    printf("======");
}