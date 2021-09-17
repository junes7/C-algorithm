// Ancient Egyptian multiplication(a larusse Ag.)
// a larusse 알고리즘이란 컴퓨터에서 곱셈을 빠르고 쉽게 할 수 있는
// 알고리즘이다. 이 알고리즘은 오직 덧셈과 쉬프트 연산만을 이용해서
// 이루어진다. 두 정수 a, b를 곱하는 알고리즘은 다음과 같다.
// (1) declare n1, n2, n3
// (2) set n1 = a, n2 = b, n3 = 0
// (3) if n1 is odd then n3 = n3 + n2
// (4) n1 = n1 >> 1, n2 = n2 << 1 ( << = left shift, >> = right shift )
// (5) if n1 != 0 then goto (3)
// (6) print n3
// 위 알고리즘을 이용하여 입력받은 두 정수의 곱을 구하는 프로그램을
// 작성하시오.
# include <iostream>
int a,b,n1,n2,n3;
int main(){
    scanf("%d %d",&a,&b);
    n1=a,n2=b,n3=0;
    while(n1!=0){
        if(n1%2==1)
            n3+=n2;
        n1>>=1;
        n2<<=1;
    }
    printf("%d",n3);
}
// load:
    // if(n1%2==1)
    //     n3+=n2;
    // n1>>=1;
    // n2<<=1;
    // if(n1!=0)
    //     goto load;
