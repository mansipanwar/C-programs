#include<stdio.h>
int main()
{
    int i,j,k,a[3][3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    return 0;
}          