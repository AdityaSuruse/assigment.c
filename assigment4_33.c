#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter A  Number :");
    scanf("%d", &n);
    for (i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        printf("Perfect Number");
    else
        printf("Not Perfect number");
    return 0;
}
