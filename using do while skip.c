//to print number upto a limit skipping even numbers
#include<stdio.h>
int main(){
    int i=1,limit;
    printf("enter the limit:");
    scanf("%d",&limit);
    do
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i++;
    } 
    while (i<=limit);
    return 0;
    
}
