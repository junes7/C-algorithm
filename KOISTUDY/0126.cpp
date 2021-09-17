// 최대 최솟값 구하기
// get maximum, minimum value
// 반복문을 활용한 대표적인 알고리즘이 최대값과 최소값을 찾는 문제이다.
// 이 문제의 목적은 주어진 수열에서 최소값, 최대값, 최소값의 위치,
// 최대값의 위치를 찾는 것이다. 이 문제를 통하여 반복문의 연습이 될
// 것이다.
# include <iostream>
int i,n,max=0,min=35000,ma_idx,mi_idx,d;
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&d);
        if(max<d){
            max=d;
            ma_idx=i;
        }
        if(min>d){
            min=d;
            mi_idx=i;
        }
    }
    printf("%d : %d\n%d : %d\n",ma_idx,max,mi_idx,min);
}