//to copy one array to another
#include<stdio.h>
int main(){
    int arr1[20],arr2[30],i,num,loc,ele;
    printf("enter the size of the array:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the elements arr[%d]",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<num;i++)
    {
        arr2[i]=arr1[i];
    }
    for(i=0;i<=num;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}