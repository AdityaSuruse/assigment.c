#include <stdio.h>
int main()
{
    int a;
    printf("Enter A Number\n");
    scanf("%d", &a);
    switch (a)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    default:
        printf("Character OR Symbol");
        break;
    }
    return 0;
}


// Assigment 3
// Q 1=>Accept a single digit from the user and display it in words. For example, if 
// digit entered is 9, display Nine. 