// 함수로 두 정수 중 큰 값 출력하기
// print larger value of two integers through function
// 입력된 두 정수 a, b 중 큰 값을 출력하는 프로그램을 작성해보자.
# include <iostream>
long long int f(long long int x,long long int y){
    return x<y?y:x;
}
int main(){
    long long int x,y;
    scanf("%lld %lld",&x,&y);
    printf("%lld",f(x,y));
}