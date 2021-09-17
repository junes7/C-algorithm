// 패턴 출력 2
// print pattern
// 다음 "B" 모양의 패턴을 출력해보자.
# include <iostream>
int main(){
    int i,j,n=5;
    char c[5][5]={};
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i%2==0)
                c[i][j]=j==n-1?'O':'@';
            else
                c[i][j]=j==0||j==n-1?'@':'O';
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%c",c[i][j]);
        printf("\n");
    }
}