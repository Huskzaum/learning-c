#include <stdio.h>

int main()
{
    int n, l = 1, b = 0;
    scanf("%d", &n);
    while(b <= n) {
        b = l * (l+1) * (l+2);
        if (b == n) {
            printf("Triangle\n");
            return 0;
        }
        l++;
    }
    printf("Trianglen't\n");
}