#include<stdio.h>
int main()
{
    int a;
    printf("Enter A Number :");
    scanf("%d",&a);
    if (a%5==0 && a%7==0)  
    { 
     printf("%d is Divisible by %d",a);
    }
     return 0;
    
}