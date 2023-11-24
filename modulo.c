#include<stdio.h>
int main(){
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("divisible");
    }
    else{
        printf("not divisible");
    }
    return 0;
}