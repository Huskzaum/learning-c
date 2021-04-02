#include <stdio.h>

int main()
{
    int l[3], max = -1;
    scanf("%d %d %d", &l[0], &l[1], &l[2]);
    for (int i = 0; i < 3; i++)
    {
        if (l[i] > max)
            max = l[i];
    }
    printf("%d eh o maior\n", max);
    return 0;
}

