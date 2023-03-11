#include <stdio.h>
int main()
{
    int n,m,i,j,sum;
    printf("This program is for getting sum of all members in row.\n");
    printf("How many rows do you want in your array?:");
    scanf("%d",&n);
    printf("How many columns do you want in your array?:");
    scanf("%d",&m);
    int a[n][m];
    int b[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter value for [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("2D array according to entered value would look like:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum+=a[i][j];
        }
         printf("Sum of row [%d] is:%d\n",i,sum);
    }
    return 0;
}
