// 세 정수의 평균 구하기
// get average of three intgers
// 세 정수 n1, n2, n3를 입력받아서 세 정수의 평균값을 구하여
// 출력하시오.
# include <iostream>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%.3f",(double)(a+b+c)/3);
}