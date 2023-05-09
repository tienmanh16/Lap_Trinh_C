#include <stdio.h>

int main()
{
    int n = 4; // S? hàng c?a h?nh
    int i, j, k; // Bi?n ð?m

    // In n?a ð?u c?a h?nh
    for(i = 1; i <= n; i++)
    {
        // In kho?ng tr?ng bên trái d?u *
        for(k = i; k < n; k++)
        {
            printf(" ");
        }

        // In d?u *
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        // Xu?ng d?ng
        printf("\n");
    }

    // In n?a sau c?a h?nh
    for(i = 1; i < n; i++)
    {
        // In kho?ng tr?ng bên trái d?u *
        for(k = 1; k <= i; k++)
        {
            printf(" ");
        }

        // In d?u *
        for(j = i; j < n; j++)
        {
            printf("*");
        }

        // Xu?ng d?ng
        printf("\n");
    }

    return 0;
}

