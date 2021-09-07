// 함수로 prime/composite 판별하기
// distinguish prime/composite through function
// 1보다 큰 자연수 1개를 입력 받아 소수인 경우 prime, 합성수인 경우
// composite를 출력하시오. 단, 함수형 문제이므로 함수 prime()만
// 제출하시오.
# include <iostream>
int n;
bool prime(int n){
    int c=0;
    for(int i=2;i<=n;i++){
        if(n%i==0)
            c++;
    }
    return c==1?c:!c;
}
int main(){
    scanf("%d",&n);
    printf(prime(n)?"prime":"composite");
}