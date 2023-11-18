#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n],i,sum=0;
    printf("enter the array elements");
    for(i=0;i<n;i++)

    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum of the array: %d",sum);
}
