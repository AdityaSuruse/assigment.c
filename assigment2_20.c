#include<stdio.h>
int main()
{
    int a;
    printf("Enter ASCII Value :=>");
    scanf("%d",&a);
    if (a>=48 && a<=57)
    {
    printf("Digit Values"); 
    }
    else if (a>=97 && a<=122)
    {
        printf("Lowercase characters");
    }
    else if (a>=65 && a<=90)
    {
        printf("uppercase characters");
    }
    else 
    printf("Specal Symbols");
    return 0;
}