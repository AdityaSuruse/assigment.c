#include<stdio.h>
int main()
{
    int a;
    printf("Enter A Amount :");
    scanf("%d",&a);
    if (a<=150000)
    printf("Tax Is 0%");
    else if (150000>=300000)
    printf("Tax Is 20%");
    else
    printf("Tax Is 30%");
    return 0;
}