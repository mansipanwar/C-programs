#include<stdio.h>
int main()
{
    int i,a[5],e,f=0,mid,b,end;
    printf("enter array elements\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("enter the element to be searched\n");
    scanf("%d",&e);
    b=0;
    end=5-1;
    while(b<=end)
    {
        mid=(b+end)/2;
        if(a[mid]==e)
        {
            f=1;
            break;
        }
        if(e>a[mid])
          b=mid+1;
        else
          e=mid-1;
    }
     if(f==1)
     printf("element found\n");
     else
    printf("not found\n");
    return 0;
}