#include<stdio.h>
int main (){
    int i,j,n,sum;
    printf("This program is for getting sum of all member in anti-diagonal.\n");
    printf("How many rows or columns do you need in your array?:");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element value for [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("2D array according to entered value would look like:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    sum=0;
    for(i=0;i<n;i++)
    {
            sum+= a[i][n-i-1];
    }
    printf("Sum of anti-diagonal is: %d\n",sum);
    return 0;
}