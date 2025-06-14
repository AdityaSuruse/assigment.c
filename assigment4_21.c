// Write a program that accepts a number and print it’s all digits.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter A Digit :");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
        printf("%d\n", i);
    return 0;
}