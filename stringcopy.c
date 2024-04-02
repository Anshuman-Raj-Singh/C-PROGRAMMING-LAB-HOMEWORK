#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b[200];
    printf("enter the string:");
    scanf("%[^\n]s",a);
    int l=strlen(a);
    for(int i=0;i<1;i++)
    b[i]=a[i];
    printf("the copied string is=%s",b);
}
