#include <stdio.h>

int main()
{
    int n, mdc, a, nm;
    scanf("%d %d", &n, &mdc);
    for(; n > 1; n--) {
        scanf("%d", &a);
        for(int d = 1; d <= mdc && d <= a; d++)
            if (mdc % d == 0 && a % d == 0)
                nm = d;
        mdc = nm;
    }
    printf("Result=%d\n", mdc);
}