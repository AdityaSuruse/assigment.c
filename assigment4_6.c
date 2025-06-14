#include <stdio.h>
int main()
{
    int x, y, i;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);
    for (i = x; i <= y; i++)
        printf("%d\n",i);
    return 0;
}