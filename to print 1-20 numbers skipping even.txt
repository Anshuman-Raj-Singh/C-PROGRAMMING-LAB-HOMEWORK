//to print 1-20 numbers skipping even
#include<stdio.h>
int main(){
    int i,limit;
    printf("enter the limit:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    if (i%2!=0)
    {
        printf("%d\n",i);
    }
    return 0;
}