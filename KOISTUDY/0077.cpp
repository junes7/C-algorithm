// 짝수 합 구하기
// get sum of even number
// 정수(1 ~ 100) 한 개를 입력받아 1 부터 그 수까지 짝수의 합을
// 구해보자.
# include <iostream>
int main() {
    int s=0,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(i%2==0)
            s+=i;
    printf("%d",s);
}