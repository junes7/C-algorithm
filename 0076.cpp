// 정수 한 개 입력받아 그 수까지 출력하기
// print number until one input integer
// method 1 with while loop
// # include <iostream>
// int main(){
//     int n,i=0;
//     scanf("%d",&n);
//     while(i<=n){
//         printf("%d\n",i++);
//     }
// }
// method 2 with for loop
# include <iostream>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("%d\n",i);
    }
}