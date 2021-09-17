// 함수로 3n+1의 최대길이 구하기
// get maximum length of 3n+1
// 컴퓨터과학에서는 다양한 알고리즘을 이용한 여러 문제들이 있다. 그 중
// 3n+1이라고 하는 문제에 대해서 알아보자.
// (1) input n
// (2) print n
// (3) if n = 1 then STOP
// (4) if n is odd then n <-- 3n+1
// (3) else n <-- n/2
// (3) goto (2)
// 만약 n이 22라면 위 알고리즘은 다음과 같은 값을 출력한다.
// 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
// 어떤 수 n에 대해서 나타나는 수열의 길이를 사이클 길이라고 한다.
// 위와 같이 입력이 22인 경우 총 16개의 길이를 가지는 수열을 출력한다.
// 따라서 22의 사이클길이는 16이다.
// 이 알고리즘은 우리가 다루는 대부분의 수의 범위 내에서는 일정한 출력 후에
// 종료되지만 아직 모든 입력값에 대해서 성립함이 증명되지는 않았다.
// 이 문제는 주어진 입력 a, b사이에서 가장 사이클 길이가 긴 것이 얼마인지
// 찾는 것이다.
# include <iostream>
int f(int n){
    int c=0;
    while(n!=1){
        n=n%2==1?3*n+1:n/2;
        c++;
    }
    return c+1;
}
void g(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int get_max(int a,int b){
    return a>b?a:b;
}
int main(){
    int a,b,ans=0;
    scanf("%d %d",&a,&b);
    if(a>b)
        g(&a,&b);
    for(int i=a;i<=b;i++)
        ans=get_max(ans,f(i));
    printf("%d",ans);
}