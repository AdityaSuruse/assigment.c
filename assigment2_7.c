#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter A Number :");
    scanf("%d%d%d",&a,&b,&c);
    if (b<a|| b<c)
    
        printf("%d is between %d and %d",b,a,c);
        else
        printf("Invale");
    return 0;
    
}