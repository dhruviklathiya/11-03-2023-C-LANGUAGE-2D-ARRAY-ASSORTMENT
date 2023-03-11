#include <stdio.h>
int main()
{
    int n,i,j;
    printf("This program is to get sum of all member in diagonal.\n");
    printf("How many rows or cols do you want in your array?:");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter value for [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("2D array according to entered value would look like:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[j][i]);
        }
    printf("\n");
    }
    int sum1=0;
    for(i=0;i<n;i++)
    {
            sum1+= a[i][i];
    }
    printf("Sum of diagonal [Top left to bottom right corner] element is: %d\n",sum1);
    int sum=0;
    for(i=0;i<n;i++)
    {
            sum+= a[i][n-i-1];
    }
    printf("Sum of reverse diagonal [Top right to bottom left corner] element is: %d",sum);
    return 0;
}
