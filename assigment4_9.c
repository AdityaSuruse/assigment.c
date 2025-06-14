#include <stdio.h>
int main()
{
    int n,sum=0, i;
    printf("Enter A numbwer :");
    scanf("%d", &n);
    for (i = 0; i <=n; i++)
        sum += i;
    {
        printf("sum of 1 To N Is : %d", sum);
    }
    return 0;
}