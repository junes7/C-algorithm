// 정수 입력받아 계속 출력하기
// print continuously after input one integer
// n개의 정수가 순서대로 입력된다.
// -2147483648 ~ +2147483647, 단 n의 최대 개수는 알 수 없다.
// n개의 입력된 정수를 순서대로 출력해보자.
// while( ), for( ), do~while( ) 등의 반복문을 사용할 수 없다.
# include <iostream>
int main() {
    int n,t;
    scanf("%d",&n);
    reget:
        scanf("%d",&t);
        printf("%d\n",t);
        if(--n!=0) goto reget;
}