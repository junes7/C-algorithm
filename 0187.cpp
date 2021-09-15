// 약수의 합(Small)
// sum of divisors
// 한 정수 N을 입력받아서 N의 모든 약수의 합을 구하는 프로그램을
// 작성하시오.
# include <iostream>
int main(){
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%i==0)
            s+=i;
    printf("%d",s);
}