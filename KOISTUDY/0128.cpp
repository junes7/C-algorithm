// Number Reverse
// 하나의 정수가 입력된다. 이 정수를 뒤집어서 출력하는 프로그램을
// 작성하시오. 예를 들어 입력되는 정수가 123이라면 321을 출력하면
// 된다. 단, 12300이 입력될 경우 00321을 출력하는 것이 아니라
// 321을 출력해야 함에 주의해야 한다.
# include <iostream>
int main(){
    int n,i=0,j,s,d[6]={};
    scanf("%d",&n);
    while(n!=0){
        d[i++]=n%10;
        n/=10;
    }
    for(j=0;j<i;j++)
        if(d[j]!=0){
            s=j;
            break;
        }
    for(j=s;j<i;j++)
        printf("%d",d[j]);
}