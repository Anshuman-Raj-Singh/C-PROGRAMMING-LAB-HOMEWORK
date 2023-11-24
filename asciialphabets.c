//to print the ascii values of all the english alphabets
#include<stdio.h>
int main(){
    char ch;
    for(ch='a';ch<='z';ch++)
    {
        printf("%d\n",ch);
    }
    for(ch='A';ch<'Z';ch++)
    {
        printf("%d\n",ch);
    }
    return 0;
}