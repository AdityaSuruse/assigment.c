#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter A Number : ");
    scanf("%d", &a);
    printf("Eneter Second Number :");
    scanf("%d", &b);
    if (a == b)
        printf("%d == %d", a ,b);
    else if (a > b)
        printf(" %d > %d", a , b);
    else if (a < b)
        printf("%d <  %d", a , b);
        else 
        printf("N0thing :");
    return 0;
}

// assigment 2
// Q11. Write a program to compare two numbers? (==,>,<) 