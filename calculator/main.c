#include <stdio.h>

int main()
{
    float a, b, result;
    printf("Enter two values to calculate:\n");
    scanf("%f %f", &a, &b);

    int opc;
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
        return 0;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
