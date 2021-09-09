// 함수로 배열의 최대값 위치 리턴하기
// return position of maximum value in array through function
// 배열의 참조 범위([a, b], a번부터 ~ b번까지 범위, 폐구간 [a, b])를
// 입력 받아 그 범위에서 가장 큰 값이 가장 처음 나타난 위치를 출력.
// 단, 함수형 문제이므로 함수 maxi()만 작성하여 제출하시오.
# include <iostream>
int n,a,b,d[1010];
int maxi(int a,int b){
    int i,m=d[a],idx=a;
    for(i=a+1;i<=b;i++){
        if(m<d[i]){
            m=d[i];
            idx=i;
        }
    }
    return idx;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&d[i]);
    scanf("%d %d",&a,&b);
    printf("%d\n",maxi(a,b));
}