#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d\n", x);
    int n[] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++) {
        int a = x / n[i];
        if (a > 0) {
            x -= n[i] * a;
        }
        printf("%d nota(s) de R$ %d,00\n", a, n[i]);
    }
    return 0;
}