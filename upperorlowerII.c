#include<stdio.h>
void main(){
    char character;
    printf("enter the character:");
    scanf("%c",&character);
    if(character>='a' && character<='z')
    {
        printf("lowercase");
    }
    else
    {
        printf("uppercase");
    }
}