// 함수로 Upper bound 위치 리턴히기
// return the position of upper bound through function
// 데이터가 오름차순으로 저장되어있는 배열에서 어떤 값보다 큰 값이
// 처음 나타나는 위치를 출력하시오. (저장되어있는 값들이 입력된 값보다
// 모두 작거나 같다면 저장되어있는 데이터개수+1을 출력한다.)
// 함수형 문제이므로 함수 upper_bound()만 작성하여 제출하시오.
# include <iostream>
int n,k,d[1010];
int upper_bound(int k){
    for(int i=1;i<=n;i++)
        if(k<d[i])
            return i;
    return n+1;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&d[i]);
    scanf("%d",&k);
    printf("%d\n",upper_bound(k));
}