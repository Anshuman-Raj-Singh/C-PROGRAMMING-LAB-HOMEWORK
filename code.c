#include<stdio.h>
void main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    printf("%d\n",num>9 && num<100);
}