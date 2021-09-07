// 함수로 love 출력하기
// print love through function
// love 를 n번 출력하시오. 단, 함수형 문제이므로 함수 f()만
// 작성하시오. 줄을 바꿔가며 love 를 n번 출력한다.
# include <iostream>
int n;
void f(int n){
    for(int i=0;i<n;i++)
        printf("love\n");
}
int main(){
    scanf("%d",&n);
    f(n);
}
