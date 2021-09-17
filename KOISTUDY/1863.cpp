// 함수로 학점 리턴하기
// return grade through function
// 다음과 같이, 점수를 입력 받아 학점을 출력하시오.
// 90 점 이상 ~ 100점 이하 : A
// 80 점 이상 ~ 90점 미만 : B
// 70 점 이상 ~ 80점 미만 : C
// 60 점 이상 ~ 70점 미만 : D
// 60 점 미만 : F
// 단, 함수형 문제이므로 함수 grade()만 작성하여 제출하시오.
# include <iostream>
int n;
char grade(int n){
    return n>=90?'A':(n>=80?'B':(n>=70?'C':(n>=60?'D':'F')));
}
int main(){
    scanf("%d",&n);
    printf("%c\n",grade(n));
}