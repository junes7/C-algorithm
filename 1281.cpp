// 함수로 수 뒤집어 더하기
// add and reverse through function
// 팰린드롬(Palindrome)은 회문자라고도 하며 앞으로 읽으나 뒤로 읽으나
// 같은 내용이 되는 문자나 문장을 말한다. 거의 모든 0이상의 정수는
// 역순으로 된 수를 더하는 과정을 반복하면 어느 순간에는 팰린드롬인
// 수가 만들어진다. 예를 들어, 처음 수가 195일 경우, 아래와 같이
// 4번을 반복하여 더하면 팰린드롬 수가 만들어진다.
// 195 처음 수
// 591
// -----
// 786
// 687
// -----
// 1473
// 3741
// -----
// 5214
// 4125
// -----
// 9339 결과(팰린드롬 수)
// 대부분의 0이상의 정수는 이런 몇 번의 반복으로 팰린드롬인 수를 만들
// 수 있지만 196만은 팰린드롬을 만들지 못하는 수이다. 왜 그런지는
// 아직 증명되지는 않았다. 처음 수를 입력받아 몇 번 만에 팰린드롬인
// 수를 만들 수 있는지 그 횟수와 그 팰린드롬 수를 구하는 프로그램을
// 작성하시오.
# include <iostream>
int f(int n){
    int r=0;
    while(n!=0){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
bool is_Pal(int n){
    return n==f(n)?true:false;
}
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(c=0;!is_Pal(n);c++){
        n+=f(n);
    }
    printf("%d %d",c,n);
}