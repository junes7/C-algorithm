// 패턴 출력 1
// print pattern
// 다음 "A" 모양의 패턴을 출력해보자.
// OO@OO
// O@O@O
// @OOO@
// @@@@@
// @OOO@
# include <iostream>
int main(){
    int i,j,n=5,d=0;
    char a[5][5]={};
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==(n+1)/2)
                a[i][j]='@';
            else{
                if(j==n/2-d)
                    a[i][j]='@';
                else if(j==n/2+d)
                    a[i][j]='@';
                else
                    a[i][j]='O';
            }
        }
        if(d<n/2)
            d++;
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
}