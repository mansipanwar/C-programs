#include<stdio.h>
int main()
{
    int a,b=1,c;
    do
    {  
        c=1;
        do
        {
            a=b*c;
            printf("%d\t",a);
            c++;
        } 
        while (c<=10/* condition */);
        printf("\n");
        b++;
    }
     while (b<=10);
     return 0;
    
}