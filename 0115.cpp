// 1~n까지의 합 구하기(NTTP)
// get sum of 1 to n
// 한 정수 n을 입력받아서 1부터 n까지의 합을 구하여 출력하시오.
// (되도록 이면 반복문을 사용할 것을 권장합니다.)
# include <iostream>
int main(){
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=i;
    }   
    printf("%d",s);
}