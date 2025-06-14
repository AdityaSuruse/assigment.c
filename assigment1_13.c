#include <stdio.h>
int main()
{
    char ad;
    printf("Enter A Value");
    scanf("%c", &ad);
    switch (ad)
    {
    case 'A' ... 'Z':
        printf("Capital Number");
        break;
    case 'a' ... 'z':
        printf("Small Letter");
        break;
    case '0' ... '9':
        printf("Digit");
        break;
    default:
        printf("Special Symbol");
        break;
    }
    return 0;
}

// Assigment 1
// Q13 => Accept a character from the user and display its ASCII value.