#include<iostream>
#include<cstdlib>
#include<ctime>
int main(void){
    int i;
    srand(time(NULL));
    for(i=0;i<5;i++)
        printf("Random Number %d: %d\n",i+1,rand()%100);
}