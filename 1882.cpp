// 함수로 거듭제곱 리턴하기
// return exponentiation through function
// int 형 자연수 두 개(a, n)를 입력 받아 거듭 제곱(exponentiation,
// a^n)한 결과 값을 출력하시오.
// 단, 함수형 문제이므로 함수 pow()만 작성하여 제출하시오.
# include <iostream>
int a,n;
long long int pow(int a,int n){
    long long int m=1;
    if(a==1||n==0)
        return m;
    else{
        for(int i=1;i<=n;i++){
            m*=a;
        }
        return m;
    }
}
int main(){
    scanf("%d %d",&a,&n);
    printf("%lld",pow(a,n));
}
