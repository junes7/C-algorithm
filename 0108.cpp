// 윤년 판단하기(NTTP)
// leap year judgement
// 한 자연수를 입력받아서 윤년인지 아닌지를 판단하는 프로그램을
// 작성하시오. 단, 윤년은 다음과 같은 성질을 지닌다고 한다.
// (1) 400의 배수이면 무조건 윤년이다.
// (2) (1)이 아닌 수 중에 4의 배수이며, 100의 배수가 아니면 윤년이다.
# include <iostream>
int main(){
    int n;
    scanf("%d",&n);
    printf(n%400==0?"Leap":(n%4==0&&n%100!=0?"Leap":"Normal"));
}