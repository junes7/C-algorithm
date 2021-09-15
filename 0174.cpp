// 수열의 합
// sum of sequence
// 다음과 같은 수열(An)이 있다.
// An = 1 + ... + n
// A1 = 1
// A2 = 1 + 2
// A3 = 1 + 2 + 3
// ...
// An = 1 + 2 + 3 + ... + n
// 임의의 정수 n이 주어질 때 이 수열의 합 Sn을 구하는 프로그램을 작성.
// S3 = 1 + 1 + 2 + 1 + 2 + 3
// Sn = A1 + A2 + A3 + ... An
# include <iostream>
int main(){
    int i,n;
    long long int s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s+=(i+1)*i/2;
    printf("%lld",s);
}