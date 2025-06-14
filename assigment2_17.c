#include <stdio.h>
int main()
{
    int a;
    printf("Enter A Price");
    scanf("%d", &a);
    if (a >= 1000)
        printf("Discount Is 8%");
    else if (2000 >= 5000)
        printf("Disount Is 15%");
    else
        printf("Discount Is 30%");
    return 0;
}