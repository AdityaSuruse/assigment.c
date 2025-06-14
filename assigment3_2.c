#include <stdio.h>
int main()
{
    int i, j;
    char n;
    printf("Enter Operator\n");
    scanf("%d %c %d", &i, &n, &j);
    switch (n)
    {
    case '+':
        printf("%d + %d = %d", i, j, (i + j));
        break;
    case '-':
        printf("%d - %d = %d", i, j, (i - j));
        break;
    case '*':
        printf("%d * %d = %d", i, j, (i * j));
        break;
    case '/':
        printf("%d / %d = %d", i, j, (i / j));
        break;
    default:
        printf("Error");
        break;
    }
    return 0;
}

// Assigment 3
// Q 2 =>rite a program, which accepts two integers and an operator as a character (+ - * /), performs the corresponding operation and displays the result.