// 최대 GCD (max GCD)
// 1부터 n까지의 자연수 중 두 자연수 a, b를 고를 때, gcd(a, b)를
// 최대화 하고자 한다. (단, 1 <= a < b <= n) 얻을 수 있는
// 최대 gcd(a, b)의 값을 구하는 프로그램을 작성하시오.
# include <iostream>
int n,i,j,t,m=0;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    scanf("%d",&n);
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++){
            t=gcd(i,j);
            if(m<t)
                m=t;
        }
    printf("%d",m);
}