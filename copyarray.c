//to put one array's elements into the other
#include<stdio.h>
int main(){
    int arr1[10],arr2[20],i,num,ele;
    printf("enter the size of the array:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the elements of the first array:");
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<num;i++)
    {
        arr1[i]=arr2[i];
    }
    for(i=0;i<=num;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}