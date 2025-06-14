#include<stdio.h>
int main()
{
    int a,cnt=0;
 printf(" Enter A Number :");
 scanf("%d",&a);
 while (a>0)
 {
    cnt++;
    a=a/10;
 }
 printf("Count Of Digit %d",cnt);
 return 0;
}