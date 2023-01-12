#include<stdio.h>
int main()
{
    int i=2;
    do
    {
        if(i%2==0)
        printf("%d\t",i);
        i++;
    }
    while(i<=100);
    return 0;
}