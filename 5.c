#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 5; i >= 1; i--)
    {
        for (int k = 5; k >= i; k--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

}