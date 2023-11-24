#include<stdio.h>
void main(){
    int character;
    printf("enter the character:");
    scanf("%c",&character);
    if(character>=65 && character<=90){
        printf("character is lowercase");
    }
    else if(character>=97 && character<=122)
    {
        printf("character is uppercase");
    }
}