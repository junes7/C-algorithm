// 함수로 원하는 값의 위치 리턴하기
// return position of wanted value through function
// 데이터가 오름차순으로 저장되어있는 배열에서 원하는 데이터가
// 저장되어있는 가장 처음 위치를 출력하시오.
// (원하는 데이터가 저장되어있지 않은 경우 –1을 출력한다.)
// 단, 함수형 문제이므로 함수 find()만 작성하여 제출하시오.
# include <iostream>
int n,k,d[1010];
int findi(int k){
    for(int i=1;i<=n;i++)
        if(k==d[i])
            return i;
    return -1;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&d[i]);
    }
    scanf("%d",&k);
    printf("%d\n",findi(k));
}
