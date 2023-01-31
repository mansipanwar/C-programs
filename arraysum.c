#include<stdio.h>
int main()
{
    int i,sum=0,A[5]={1,2,3,4,5};
    // printf("enter the array elements\n");
    // for(i=0;i<10;i++)
    // {
    //     scanf("%d",&A[i]);
    // }
    for(i=0;i<5;i++)
    {
    printf("%d",A[i]);
    }
    for(i=0;i<5;i=i+2)
    {
        sum=sum+A[i];
    }
        printf("%d",sum);
}