// 함수로 수 뒤집기
// Reverse number through function
// 하나의 정수가 입력된다. 이 정수를 뒤집어서 출력하는 프로그램을
// 작성하시오. 예를 들어 입력되는 정수가 123이라면 321을 출력하면 된다.
// 단, 12300이 입력될 경우 00321을 출력하는 것이 아니라 321을 출력해야
// 함에 주의해야 한다.
# include <iostream>
int f(int n){
    int rev=0;
    while(n!=0){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}