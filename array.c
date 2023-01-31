#include<stdio.h>
int main()
{
    int a[5],i,n;
    printf("enter array element\n");
    for(i=0;i<5;i++)
     scanf("%d",&a[i]);
    printf("\n Entered array is \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}