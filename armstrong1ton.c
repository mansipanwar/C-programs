#include<stdio.h>
int main()
{
    int n,r,sum,temp,i=1;
    printf("enter the value of n \n");
    scanf("%d",&n);
    while(i<=n)
    { 
        temp=i;
        sum=0;
        while(temp>0)
        {
            r=n%10;
            sum=sum+r*r*r;
            n=n/10;
        }
        if(sum==i)
            printf("%d\n",sum);
            i++;
    }
    return 0;
}