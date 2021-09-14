// 두 개씩 묶어 작은 값 골라 배열 만들기
// create array with a small value after tie two
// n개의 데이터를 배열에 입력 받은 후, 두 개씩 묶어 비교한 후, 작은
// 값만 들어간 배열을 만들고 출력해보자. 6개의 데이터가 다음과 같이
// 입력되었을 때, 1 2 3 4 5 6 아래와 같이 출력하면 된다. 1 3 5
// k번째 위치에 저장되어야 하는 값은 다음과 같이 표현할 수도 있다.
// m[k] = min(m[2*k], m[2*k+1]); //k >= 0
// 6
// 1 3 5 6 4 2
// 1 5 2 output
# include <iostream>
int main(){
    int n,i,d[110],r[110];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);
    for(i=0;i<n/2;i++)
        r[i]=d[2*i]<d[2*i+1]?d[2*i]:d[2*i+1];
    for(i=0;i<n/2;i++)
        printf("%d ",r[i]);
}