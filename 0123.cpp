// 윷놀이(yut play)
// GSHS 학생들은 윷놀이 대회를 한다. 0이 나오면 뒤집어지지 않은
// 상태이고, 1이 나오면 뒤집어진 상태이다.
// 도(D) : 1개가 뒤집어진 상태
// 개(K) : 2개가 뒤집어진 상태
// 걸(G) : 3개가 뒤집어진 상태
// 윷(U) : 4개가 뒤집어진 상태
// 모(M) : 하나도 뒤집어지지 않은 상태
// N(1<=N<=10)번 윷을 던질 때, 윷들이 어떤 상태인지를 구하라.
# include <iostream>
int main(){
    int n,c,i,j,t;
    char d[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(c=0,j=0;j<4;j++){
            scanf("%d",&t);
            if(t==1)
                c++;
        }
        d[i]=c==1?'D':(c==2?'K':(c==3?'G':(c==4?'U':'M')));
    }
    for(i=0;i<n;i++)
        printf("%c ",d[i]);
}