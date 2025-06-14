// Accept a character from the keyboard and display its previous and next character 
// in order. Ex. If the character entered is ‘d’, display “The previous character is c”, 
// “The next character is e”.

#include<stdio.h>
int main()
{
    char a,b,c;
    printf("Enter A Character :");
    scanf("%c%c%c",&a,&b,&c);
    if (b<a|| b<c)
    printf("Middle Character: => %c\nThe previous character is =>%c\nThe next character is =>%c ",b,a,c);
    return 0;
}