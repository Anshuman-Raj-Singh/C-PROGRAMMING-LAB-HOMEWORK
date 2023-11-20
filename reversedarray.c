#include<stdio.h>
int main(){
    int arr1[30],arr2[20],ele,num,i,loc;
    printf("enter the size of the array:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    printf("enter the array[%d] elements:",i);
    scanf("%d",&arr1[i]);
    }
    for(i=0;i<num;i++)
    {
        arr2[i]=arr1[i];
    }
    for(i=0;i<num;i++)
    {
        printf("%d\t",arr2[i]);
    }
    for(i=num;i>=0;i--)
    {
        printf("%d\t",arr1[i]);
    }
    return 0;
    }