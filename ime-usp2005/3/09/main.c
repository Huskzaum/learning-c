#include <stdio.h>

int main(void)
{
    float a, b, result;
    int opc, n, i = 0;
    scanf("%d", &n);

    for (; n > 0; n--)
    {
        printf("\n");

        printf("Enter two values to calculate:\n");
        scanf("%f %f", &a, &b);

        printf("Options:\n * 1 - Sum\n * 2 - Subtract\n * 3 - Multiply\n * 4 - Division\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            result = a / b;
            break;
        default:
            printf("Invalid option!\n");
            i = 1;
            break;
        }

        if (!i)
            printf("Result: %.2f\n", result);
        i = 0;
    }
    return 0;
}