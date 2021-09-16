// 배수 3개 출력하기
// print three multiple values
// 한 자연수 n을 입력받는다. n의 배수 3개를 출력한다. 단, n은 포함하지
// 않아야 하고 모두 다른 배수를 출력한다. 그리고 배수 값은 int 범위를
// 넘어서는 안된다.
# include <iostream>
int main(){
    int i,j,k=1,c,n,d[101]={},r[101]={};
    for(i=1;i<=100;i++)
        d[i]=i;
    for(i=2;i<=100;i++){
        for(j=i+i;j<=100;j+=i)
            d[j]=0;
    }
    for(i=2;i<=100;i++){
        if(d[i]!=0)
            r[k++]=d[i];
    }
    scanf("%d",&n);
    for(c=1,i=1;i<=10;i++){
        if(c>3) break;
        else if(r[i]!=0){
            c++;
            printf("%d\n",n*r[i]);
        }
    }
}
// for(i=1;i<=n;i++){
    //     if(n%r[i]==0)
    //         r[i]=0;
    // }