// Assigment 2
// Q=>3. Write a program to check whether given number is even or odd (with if and
// conditional operator ?:)?
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Is Even Number");
    else
        printf("Is Odd Number");
    return 0;
}