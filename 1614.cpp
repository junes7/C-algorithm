// 구간 합(Prefix Sum)
// n개의 자료를 가지는 배열에서 주어진 구간 [l, r]의 합을 구하는
// q개의 질문이 입력된다. 각 q개의 질문에 대해서 빠르게 답을 구하는
// 프로그램을 작성하시오.
# include <iostream>
int main(){
    int i,j,n,q,l,r;
    int d[100010]={},e[100010]={};
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%d",&d[i]);
        d[i]+=d[i-1];
    }
    for(i=1;i<=q;i++){
        scanf("%d %d",&l,&r);
        e[i]=d[r]-d[l-1];
    }
    for(i=1;i<=q;i++)
        printf("%d\n",e[i]);
}