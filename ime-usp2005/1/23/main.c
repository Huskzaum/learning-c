#include <stdio.h>

int main()
{
    int n, r, s = 0, t;
    scanf("%d", &n);
    for (t = n; n > 0; n /= 10)
    {
        s = s * 10 + n % 10;
    }
    if (t == s)
        printf("Palindrome\n");
    else
        printf("Palindromen't\n");
}