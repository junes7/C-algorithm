// 함수로 zero 또는 non zero 출력하기
// print zero or non zero through function
// zero 또는 non zero 를 출력하시오. 단, 함수형 문제이므로 함수
// f()만 작성하시오.
// 0 이 입력되면 zero, 그 외에는 non zero 를 출력한다.
# include <iostream>
int n;
void f(int n){
    printf(n==0?"zero":"non zero");
}
int main(){
    scanf("%d",&n);
    f(n);
}