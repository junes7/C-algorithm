// 함수로 plus/minus/0 판별하기
// distinguish plus/minus/0 through function
// 정수 1개를 입력 받아 양수인 경우 plus, 음수인 경우 minus, 0 인
// 경우 0을 판별하여 출력하시오. 단, 함수형 문제이므로 함수 zero()와
// plus()만 제출하시오.
# include <iostream>
int n;
bool zero(int n){
    return !n;
}
bool plus(int n){
    return n>0?n:!n;
}
int main(){
    scanf("%d",&n);
    printf(zero(n)?"zero":(plus(n)?"plus":"minus"));
}