#include <stdio.h>

int main()
{

    int num;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == 0)
            printf("Finish :)\n");
        else
            printf("The sqrt of number %d is %d\n", num, num * num);
    } while (num != 0);

    return 0;
}