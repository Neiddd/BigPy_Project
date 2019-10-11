#include<stdio.h>

int sum(int a, int b);
int main(void){
    int num1=0,num2=0;
    scanf_s("%d",&num1);
    scanf_s("%d",&num2);
    int result=sum(num1,num2);
    printf("result=%d",result);
    return 0;
}

int sum(int a, int b){
    return a+b;
}