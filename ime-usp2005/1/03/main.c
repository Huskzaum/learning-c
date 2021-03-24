#include <stdio.h>

int main()
{

    int n, b = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", b);
        b += 2;
    }
    printf("\n");

}