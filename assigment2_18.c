//  A library charges a fine for every book returned late. Accept the number of
// days the member is late, compute and print the fine as follows:(less than five
// days Rs fine, for 6 to 10 days Rs. Fine and above 10 days Rs. fine )

#include <stdio.h>
int main()
{
    int a;
    printf("Emter A Days");
    scanf("%d", &a);
    if (a <= 5)
        printf("Fine Is 7RS");
    else if (a >= 6 && a <= 10)
        printf("Fine Is 9RS");
    else if (a >= 10 && a <= 20)
        printf("Fine Is 14RS");
    else
        printf("Give Application To Principle");
    return 0;
}