// 진법변환(재귀)
// convert notation(recursion)
// 현재 우리가 일반적으로 사용하고 있는 진법은 10진법이다. 
// 즉 0, 1, 2, 3, 4, 5, 6, 7, 8, 9로 구성된 10개의 기호로 모든 수를
// 표현한다. 하지만 디지털의 세계에서는 0, 1로만 구성된 2진법과 이를
// 쉽게 표현하기 위한 16진법을 사용한다. 2진법은 0, 1의 2가지 기호,
// 16진법은 0,1,2,3,4,5,6,7,8,9, A, B, C, D, E, F로 구성된 16가지
// 기호로 모든 숫자를 표현한다. 이 문제의 목적은 주어진 10진수 n을
// k진법의 수로 변환하는 것이다. 단, 재귀함수로 작성하시오.
# include <iostream>
int n,k,b=0,d[15]={};
void di(int n,int k){
    if(n==0) return;
    else{
        d[b++]=n%k;
        return di(n/k,k);
    }
}
void pr(int d[15],int i){
    if(i<0) return;
    else{
        printf("%c",d[i]<10?d[i]+48:d[i]+55);
        return pr(d,i-1);
    }
}
int main(){
    scanf("%d %d",&n,&k);
    di(n,k);
    pr(d,b-1);
}