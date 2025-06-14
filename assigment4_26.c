#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    printf("Enter A number");
    scanf("%s",&n);
    printf("Reverse Number Is %s",strrev(n));
    return 0;
}