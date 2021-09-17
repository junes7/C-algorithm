// 합과 차(add and subtract)
// 어떤 두 자연수 a와 b가 있을 때(a≥b), 합 n=a+b와 차 m=a-b는 다음과
// 같은 성질을 가진다. n+m은 짝수이다. 두 자연수 a와 b의 합과 차가
// 입력되었을 때, a와 b를 구하는 프로그램을 작성하시오.
# include <iostream>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d\n%d",(n+m)/2,n-((n+m)/2));
}