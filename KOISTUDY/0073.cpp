// 정수 한 개 입력받아 카운트다운 출력하기 1
// print countdown after input one integer
// 정수(1 ~ 100) 한 개가 입력되었을 때 카운트다운을 출력해보자.
// method 1 with goto
// # include <iostream>
// int main(){
//     int n;
//     scanf("%d",&n);
//     dec:
//         printf("%d\n",n--);
//         if(n>0) goto dec;
//     return 0;
// }
// method 2 with for loop
// # include <iostream>
// int main(){
//     int i,n;
//     scanf("%d",&n);
//     for(i=n;i>0;i--){
//         printf("%d\n",i);
//     }
// }
// method 3 with while loop
# include <iostream>
int main(){
    int n;
    scanf("%d",&n);
    while(n!=0){
        printf("%d\n",n--);
    }
}