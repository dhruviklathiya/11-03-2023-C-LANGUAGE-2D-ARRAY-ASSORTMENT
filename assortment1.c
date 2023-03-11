#include <stdio.h>
int main()
{
    int i,n;
    printf("This program is for checking which number is negative from entered values\n");
    printf("Enter number of member in array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value for [%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d is a negative value from the array.\n",a[i]);
        }
    }
    return 0;
}
