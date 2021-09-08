// 함수로 원하는 값의 위치 리턴하기 1
// return position of wanted value through function
// n 개의 정수를 배열로 입력 받고, 원하는 값 k가 저장되어있는 가장
// 처음 위치를 출력하시오. (원하는 값 k값이 저장되어있지 않은 경우에는
// –1을 출력한다.) 단, 함수형 문제이므로 함수 f()만 작성하시오.
# include <iostream>
int n,k,d[100010]={};
int f(int k){
    for(int i=1;i<=n;i++){
        if(i==n&&d[i]!=k)
            return -1;
        else if(d[i]==k)
            return i;
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&d[i]);
    scanf("%d",&k);
    printf("%d\n",f(k));
}