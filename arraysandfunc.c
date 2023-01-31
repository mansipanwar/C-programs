#include<stdio.h>
int main()
{
    void display (int a[],int n);
    int sumarray (int a[],int n);
    int a[10];
    int i,n,sum;
    printf("how many numbers are in the array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    printf("contents of the array are\n");
    display(a,n);
    sum=sumarray(a,n);
    printf("\nsum of the elements is %d\n",sum);
    printf("\n");
    return 0;
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<=n-1;i++)
    printf("%d\t",a[i]);
}
int sumarray(int x[],int max)
{
    int i,temp=0;
    for(i=0;i<=max-1;i++)
    temp=temp+x[i];
    return temp;
}