#include <stdio.h>
#include<ctype.h>
int main()
{
    char vo;
    printf("Enter Vovels : ");
    scanf("%c", &vo);
    vo=tolower (vo);
    switch (vo)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vovel");
        break;
    default:
        printf("Not Vovel");
        break;
    }
    return 0;
}