#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter A Number :");
    scanf("%d", &b);
    if (b % 5 == 0)
        printf("%d Is Divisible By 5", b);
        else if (b % 7 == 0)
        printf("%d is divisible by 7",b);
        else
        printf("Invaled");
    return 0;
}