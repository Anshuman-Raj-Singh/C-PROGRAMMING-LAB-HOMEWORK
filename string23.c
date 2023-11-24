#include<stdio.h>
int main(){
    char a[100];
    printf("enter the string");
    scanf("%s",&a);
    printf("the string is %s",a);
    printf("enter the string");
    gets(a);
    printf("the string is %s\n",a);
    printf("enter the string\n");
    scanf("%[^\n]s",a);
    printf("the string is %s \n",a);
    return 0;
}