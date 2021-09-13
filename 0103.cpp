// 원의 넓이 구하기
// find area of circle
// 원의 지름의 길이 R을 입력받아서 원의 넓이를 구하는 프로그램을 작성.
// (단, PI는 3.14로 계산한다.)
# include <iostream>
int main(){
    double r;
    scanf("%lf",&r);
    printf("%.2lf",(r/2)*(r/2)*3.14);
}