// 대소문자 변환하기
// convert uppercase to lowercase
# include <iostream>
int main(){
    int i;
    char ch[5];
    scanf("%s",ch);
    for(i=0;i<5;i++)
        ch[i]-=32;
    printf("%s",ch);
}