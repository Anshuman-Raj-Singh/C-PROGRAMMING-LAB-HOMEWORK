#include<stdio.h>
void main(){
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("it is even");
    }
    else{
        printf("it is odd");
    }
}