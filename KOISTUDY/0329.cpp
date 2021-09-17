// 최대값 II(maximum value)
// 9×9 격자판에 쓰여진 81개의 자연수가 주어질 때, 이들 중 최대값을
// 찾고 그 최대값이 몇 행 몇 열에 위치한 수인지 구하는 프로그램을
// 작성하시오. 예를 들어, 다음과 같이 81개의 수가 주어지면
// 이들 중 최대값은 90이고, 이 값은 5행 7열에 위치한다.
# include <iostream>
int i,j,d[10][10],m=0,midx,midy;
int main(){
    for(i=1;i<10;i++)
        for(j=1;j<10;j++){
            scanf("%d",&d[i][j]);
            if(m<d[i][j]){
                m=d[i][j];
                midx=i;
                midy=j;
            }
        }
    printf("%d\n%d %d",m,midx,midy);
}