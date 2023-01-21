#include<stdio.h>
int main()
{
    int i,count=0,word=0,n;
    char name[15],area[30],city[30];
    printf("enter your name\n");
    gets(name);
    printf("enter your house name\n");
    scanf("%d",&n);
    printf("enter area name\n");
    gets(area);
    printf("enter city name\n");
    gets(city);
    puts(name);
    printf("%d",n);
    puts(area);
    puts(city);
    return 0;
}