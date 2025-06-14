#include <stdio.h>
int main()
{
    int h, m, s;
    printf("Enter A Hars :");
    scanf("%d", &h);
    printf("Enter A Minite :");
    scanf("%d", &m);
    printf("Enter A Second :");
    scanf("%d", &s);
    if (h >=0 && h <= 24)
    {
        printf("Valed Hars %d\n",h);
        if (m >=0 && m <= 60)
        {
            printf("Valed Minite %d\n",m);
            if (s >=0 && s <= 60)
            {
                printf("Valed Second %d\n",s);
            }
            else
                printf("Unvaled Second => %d\n",s);
        }
        else
            printf("Unvaled Minite => %d\n",m);
    }
    else
        printf("Unvaled Hars => %d",h);
    return 0;
}