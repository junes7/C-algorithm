// 함수로 실수(double) 3.1415926535897 리턴하기
// return real number(double) 3.1415926535897 through function
// 3.1415926535897 를 출력하시오. 단, 함수형 문제이므로 함수 f()만
// 작성하시오.
# include <iostream>
double f(){
    return 3.1415926535897;
}
int main(){
    printf("%.13lf\n",f());
}