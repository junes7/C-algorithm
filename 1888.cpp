// 재귀로 * n개 한 줄로 출력하기
// print stars n times in one line with recursion
// 한 정수 n을 입력받아 n개의 별(*)을 출력하시오. (단, 반복문은
// 사용할 수 없다.)
# include <iostream>
void f(int n){
    if(n<1) return;
    else{
        printf("*");
        return f(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    f(n);
}