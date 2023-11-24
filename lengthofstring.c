#include<stdio.h>
void main(){
    char a[20];
    printf("enter the string:");
    scanf("%[^\n]s",&a);
    int l=0;
    for(int i=0;;i++)
    {
        if(a[i]=='\0')
        break;
        else
        l++;
    }
    printf("the length is=%d",l);
}