#include<stdio.h>
int main() 
{
    int n = 1;
    for (int i=5; i>=n; i--) {
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}