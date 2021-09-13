// 두 정수의 몫과 나머지 구하기
// get quotient and remainder of two integers
// 두 정수 a, b를 입력받아서 정수 a를 b로 나눈 몫과 나머지를 구하시오.
# include <iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    printf("%d\n%d",a/b,a%b);
}