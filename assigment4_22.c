#include <stdio.h>
int main()
{
    int i, n,cunt=0;
    printf("Enter A Digit :");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
        printf("%d\n", i);
        cunt+=i-1;
        printf("count of Number Is %d",cunt);
    return 0;
}