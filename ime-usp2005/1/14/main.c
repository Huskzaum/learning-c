#include <stdio.h>

int main()
{
    int n, i = 0, j = 1, k;
    scanf("%d", &n);
    for (int l = 1; l < n; l++) {
        k = i+j;
        i = j;
        j = k;
    }
    printf("F(%d) = %d\n", n, j);
}