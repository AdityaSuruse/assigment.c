#include <stdio.h>
int main()
{
    int i, n,sum=0;
    printf("Enter A Digit :");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
     sum+=i;
        printf("sum of Number Is %d",sum);
    return 0;
}