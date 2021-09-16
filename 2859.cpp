// 소수 출력 1
// print prime number
// 소수는 1과 자기 자신만을 약수로 가지는 수를 말한다. 예를 들어 2는
// 약수가 1과 2뿐이므로 소수다. 10이상의 자연수 중 소수를 3개만
// 출력해보자.
# include <iostream>
int main(){
    int i,j,c;
    for(i=10;i<19;i++){
        for(c=0,j=2;j<=i;j++)
            if(i%j==0)
                c++;
        if(c==1)
            printf("%d ",i);
    }
}