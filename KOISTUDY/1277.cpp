// 함수로 소수의 합 구하기
// get sum of prime number through function
// 임의의 한 정수 n을 입력받아서, [1, n]범위에서 소수의 합을 출력.
# include <iostream>
bool isPrime(int n){
    int c=0;
    if(n==1)
        return false;
    else{
        for(int i=2;i<=n;i++)
            if(n%i==0)
                c+=1;
        return c==1?true:false;
    }        
}
int main(){
    int n,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        if(isPrime(i))
            ans+=i;
    printf("%d",ans);
}