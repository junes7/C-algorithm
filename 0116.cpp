// K의 배수의 합 출력하기
// print sum of multiple of k
// 두 정수 n과 k를 입력받아서, [1, n]범위에서 k의 배수의 합을 출력하시오.
// (되도록 이면 반복문을 사용할 것을 권장합니다.)
# include <iostream>
int main(){
    int i,n,k,s=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++){
        if(i%k==0)
            s+=i;
    }
    printf("%d",s);
}